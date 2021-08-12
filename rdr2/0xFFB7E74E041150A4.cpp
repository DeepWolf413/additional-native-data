// grizzlies_abandon.ysc @ L255
bool func_8()
{
  if (func_16(iLocal_17))
  {
    func_4(1);
  }
  if (7 == iLocal_15)
  {
    fLocal_25 = MISC::GET_WIND_SPEED();
    fLocal_25 = func_18(fLocal_25 > 0f, (fLocal_25 - 0.5f), 0f);
    MISC::SET_WIND_SPEED(fLocal_25);
    fLocal_26 = MISC::GET_SNOW_LEVEL();
    fLocal_26 = func_18(fLocal_26 > 0f, (fLocal_26 - 0.01f), 0f);
    MISC::_SET_SNOW_LEVEL(fLocal_26);
    if (fLocal_25 > 5f)
    {
      return false;
    }
  }
  return true;
}