#pragma once

#include "types.hpp"

#include "CtrFS.hpp"
#include "DfxResAlc.hpp"
#include "DfxLinkList.hpp"
#include "DfxVRAMTransfer.hpp"
#include "MemAlcBase.hpp"

class DfxMemorySys{
public:
    DfxMemorySys(void);
    virtual ~DfxMemorySys();
    void memReadCancelAll(void);
    void init(MemAlcBase *, DfxResAlc *, DfxLinkList<DfxLineBB> *, DfxVRAMTRansfer, CtrFS);
    void term(void);
    void doWork(void);
}