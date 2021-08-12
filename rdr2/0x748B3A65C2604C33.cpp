// camp_beechershope.ysc @ L49002
bool func_1541(int iParam0)
{
  if (!func_1879(32))
  {
    return false;
  }
  if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_POSSE_CAMP")))
  {
    return false;
  }
  if (!func_1880())
  {
    return false;
  }
  if (func_1881(16))
  {
    return false;
  }
  if (!GANG::_0xD6F6ACF4392187FB(Global_1225639.f_14) || !GANG::_0x424B17A7DC5C90BC(PLAYER::INT_TO_PLAYERINDEX(Global_1225639)))
  {
    return false;
  }
  if (iParam0 == 1 && func_670(Global_1131433.f_8, 1))
  {
    return false;
  }
  return true;
}