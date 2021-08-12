// mudtown2.ysc @ L37275
bool func_804(var uParam0)
{
  CAM::_0xE296208C273BD7F0(-1, -1, 0, 17, 1, 0);
  func_185(0);
  MISC::_0x68319452C5064ABA(joaat("BARBRAWL_VAL"), 0);
  ENTITY::SET_ENTITY_INVINCIBLE(Local_119[0 /*9*/], false);
  ENTITY::SET_ENTITY_INVINCIBLE(Local_119[2 /*9*/], false);
  ENTITY::SET_ENTITY_INVINCIBLE(Local_119[1 /*9*/], false);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_119[0 /*9*/], true);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_119[2 /*9*/], true);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_119[1 /*9*/], true);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_165[10 /*9*/], true);
  if (ENTITY::DOES_ENTITY_EXIST(Local_165[13 /*9*/]))
  {
    PED::_0x642720D8D69328B6(Local_165[13 /*9*/], 0);
  }
  PED::_0x642720D8D69328B6(Global_35, 0);
  func_71(&Global_1935630, 262144);
  func_1262();
  return uParam0->f_607 == uParam0->f_607;
}