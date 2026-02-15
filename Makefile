# --------------------------
# 3DS Decomp Build Makefile
# --------------------------

# Toolchain
DEVKIT := C:/devkitPro/devkitARM/bin
CC  := $(DEVKIT)/arm-none-eabi-gcc.exe
CXX := $(DEVKIT)/arm-none-eabi-g++.exe
LD  := $(DEVKIT)/arm-none-eabi-g++.exe

# Output
TARGET  := build/game.elf
BUILD   := build
SRC_DIR := src
ASM_DIR := asm

# Sources
CPP_SRC := $(shell find $(SRC_DIR) -name '*.cpp')
ASM_SRC := $(shell find $(ASM_DIR) -name '*.s')

# Objects
CPP_OBJS := $(patsubst $(SRC_DIR)/%.cpp,$(BUILD)/%.o,$(CPP_SRC))
ASM_OBJS := $(patsubst $(ASM_DIR)/%.s,$(BUILD)/%.o,$(ASM_SRC))
OBJS     := $(CPP_OBJS) $(ASM_OBJS)

# Include paths
INCLUDES := -Iinclude

# Compiler flags
CXXFLAGS := -Wall -O0 -g $(INCLUDES) -std=c++17

# Linker script
LINKER := linker.ld

# Libraries (CTR-SDK) - commented out for now
#LIBS := lib/CTR-SDK/libnn_fs.a lib/CTR-SDK/libnn_hid.a lib/CTR-SDK/libnn_gxlow.a lib/CTR-SDK/libnn_cfg.a lib/CTR-SDK/libnn_ro.a
LIBS :=

# --------------------------
# Rules
# --------------------------

# Default target
all: $(TARGET)

# Link ELF
$(TARGET): $(OBJS) $(LINKER)
	@mkdir -p $(dir $@)
	$(LD) -T $(LINKER) -nostdlib -Wl,--gc-sections -o $@ $(OBJS) $(LIBS)
	@echo "Built ELF: $@"

# Compile C++ files
$(BUILD)/%.o: $(SRC_DIR)/%.cpp
	@mkdir -p $(dir $@)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Compile ASM files
$(BUILD)/%.o: $(ASM_DIR)/%.s
	@mkdir -p $(dir $@)
	$(CC) -c $< -o $@

# Clean
clean:
	rm -rf $(BUILD)/*
	@echo "Cleaned build folder"

.PHONY: all clean

