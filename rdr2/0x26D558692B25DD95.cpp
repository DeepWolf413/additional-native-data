// braithwaites2.ysc @ L40949
void func_920(var uParam0)
{
  if (func_33(uParam0) < 25)
  {
  }
  if (func_33(uParam0) > 2 && func_33(uParam0) < 6)
  {
    PED::SET_PED_RESET_FLAG(Global_35, 134, true);
  }
  LAW::_DISABLE_GUARD_ZONE("CALIGA_HALL");
  if (!func_180(262144) && ((func_1271(Global_35, uLocal_844[0], 1, 0) || func_1271(Global_35, uLocal_844[1], 1, 0)) || func_1271(Global_35, uLocal_844[3], 1, 0)))
  {
    LAW::_DISABLE_GUARD_ZONE("BRAITHWAITE_MANOR");
  }
}