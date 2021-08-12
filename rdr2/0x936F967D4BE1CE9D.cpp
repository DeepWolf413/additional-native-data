// ambush_inb_harass.ysc @ L9197
bool func_312()
{
  if (func_467(Global_1935630.f_44))
  {
    if (WEAPON::_IS_WEAPON_SNIPER(Global_1935630.f_44))
    {
      if (CAM::_0xA24C1D341C6E0D53(1, 1, 1))
      {
        if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()))
        {
          return true;
        }
      }
    }
    else if (func_468())
    {
      return true;
    }
  }
  return false;
}