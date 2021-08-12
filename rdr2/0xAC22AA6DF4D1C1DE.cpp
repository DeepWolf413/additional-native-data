// braithwaites2.ysc @ L56384
void func_1378()
{
  if (!bLocal_798 && func_163(bLocal_785, 0))
  {
    iLocal_797 = PED::CREATE_GROUP(2);
    PED::SET_GROUP_FORMATION(iLocal_797, 10);
    PED::SET_PED_CONFIG_FLAG(bLocal_785, 279, true);
    PED::SET_PED_AS_GROUP_LEADER(bLocal_785, iLocal_797, false);
    PLAYER::_0xAC22AA6DF4D1C1DE(PLAYER::GET_PLAYER_INDEX(), bLocal_785, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */, 2, 2, 0);
    bLocal_798 = true;
  }
}