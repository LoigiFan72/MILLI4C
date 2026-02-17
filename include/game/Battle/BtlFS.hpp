#pragma once

#include "CtrFileBase.hpp"
#include "CtrFReadBase.hpp"

namespace BtlFS{
    class FileUnit : public CtrFileBase{
    FileUnit();
    virtual ~FileUnit();
};
    class FReadUnit : public CtrFReadBase{
    FReadUnit();
};
};