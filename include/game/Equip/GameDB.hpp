//AUTHOR: *AlphaDream Corp. Ltd. 2011-2013,* *Nintendo 2011-2013*
//REWROTE BY: LuigiFan27
//PROJECT: RedSpark (Headers)
//
//
//FILENAME: GameDB.hpp
//NAMESPACE: Global
//COMMENT: The type (ie void, uint, etc) is unknown so void is a placeholder.
//All contents are based on the US 1.0 Release of the game.
//*----------------------------RedSpark----------------------------*
#pragma once

#include "types.hpp"

class GameDB{
public: 
    enum eItemMsgType : u8
    {
        TYPE1,
        TYPE2,
        TYPE3
    };
    GameDB();
    void GetItemMsg(ushort, GameDB::eItemMsgType);
    void GetUseItem(ushort);
    void GetItemData(ushort);
    void GetPcAtkData(ushort);
    void GetBadgeEffect(ushort);
    int GetBadgeEffectId();
    void GetBadgeIdList(uchar);
    void GetBadgeIdList(void);
    uint GetBadgeIdPair(ushort);
    void GetEquipIdList(void);
    void GetItemMsgCore(ushort);
    void GetPcAtkExpMsg(ushort,uchar,uchar);
    void GetBadgeEffectId(ushort,ushort);
    void GetBrosAtkIdList(void);
    void GetUseItemIdList(void);
    void GetBadgeEffExpMsg(ushort);
    void GetRankUpBonusName(ushort);
    void GetMiracleAtkIdList(void);
    void GetRankUpBonusExpMsg(ushort);
    void GetExpertChallengeMsgData(ushort);
    void GetExpertChallengeMsgFile(void);
    void GetBadge(ushort);
    void GetEquip(ushort);
};