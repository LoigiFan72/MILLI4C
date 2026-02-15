#pragma once

#include <types.hpp>
#include <ResCamera.hpp>
#include <AnimGroup.hpp>
#include <GfxPtr.hpp>
//#include <nw/ut/internal/RuntimeTypeInfo.hpp>
//#include <nn/math/vec3.h>
//#include <nn/math/matrix34.h>

namespace adsl{
namespace gfx{

class Camera{
u8 _pad_[0x298];

    struct Description{
    };
public: 
    Camera(void);
    virtual ~Camera();
    uint Initialize(); //IAllocator
    int* Create(); //scenenode*, ressceneobj, const cameradescription&, IAllocator*
    void Accept();
    uint* GetTargetPosition(void);
    char* GetRunTimeInfo();
    float GetFar(void);
    void GetNear(void); //isnt a void inaccurate
    void SetProspective(float,float,float,float);
    void SetUpwardVector();//nn::math::VEC3 const&
    void SetTargetPosition();//nn::math::VEC3 const&
    void UpdateCameraMatrix();
    void SetFar(float);
    void SetNear(float);
    void SetOrtho(float,float,float,float,float,float);
    void StoreOriginal(); //IAllocator
    void DestroyResCamera(); //nw::os::IAllocator, adsl::gfx::res::ResCamera
    void GetMemorySizeInternal(); //nw::os::MemorySizeCalulator*, adsl::gfx::res::ResCamera, adsl::gfx::Camera::Description
};
};
};