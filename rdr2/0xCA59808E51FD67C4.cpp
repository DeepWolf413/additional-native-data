// finale2.ysc @ L74299
void func_1854(bool bParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, char* sParam5)
{
  if (ENTITY::IS_ENTITY_DEAD(bParam0))
  {
  }
  if (ENTITY::IS_ENTITY_DEAD(bParam1))
  {
  }
  if (PED::IS_PED_A_PLAYER(bParam0))
  {
    PLAYER::_0x2BEED53B912537D0(PLAYER::PLAYER_ID(), bParam1, -1082130432 /* Float: -1f */);
    PLAYER::_0xCA59808E51FD67C4(PLAYER::PLAYER_ID(), iParam2);
    if (bParam4)
    {
      if (MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
      {
        sParam5 = "Generic_WNT";
      }
      PLAYER::_0x3946FC742AC305CD(PLAYER::PLAYER_ID(), bParam1, sParam5, 0f, 0f, 0f, 0, "WalkAndTalk");
    }
  }
  func_2254(bParam0, bParam1, iParam3);
}