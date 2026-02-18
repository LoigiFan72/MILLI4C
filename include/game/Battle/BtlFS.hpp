#pragma once

#include "CtrFileBase.hpp"
#include "CtrFReadBase.hpp"

namespace BtlFS{
    class FileUnit : public CtrFileBase{
    virtual ~FileUnit();

    FileUnit();
};
    class FReadUnit : public CtrFReadBase{
    FReadUnit();
};
};