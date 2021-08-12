// fishing_core.ysc @ L4965
void func_163(int iParam0, bool bParam1)
{
  PED::_0xAE6004120C18DF97(iParam0, 0, bParam1);
  PED::_0xAE6004120C18DF97(iParam0, 2, bParam1);
  PED::_0xAE6004120C18DF97(iParam0, 3, bParam1);
  PED::_0xAE6004120C18DF97(iParam0, 4, bParam1);
  if (func_1())
  {
    PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(iParam0, PLAYER::PLAYER_ID(), bParam1);
  }
}