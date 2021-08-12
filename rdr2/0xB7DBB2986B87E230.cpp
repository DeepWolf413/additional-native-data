// bounty1.ysc @ L63662
bool func_1696()
{
  if (func_424(iLocal_111, 0) && func_424(Global_35, 0))
  {
    if (func_779(Global_35, 1, 0, 0) != joaat("WEAPON_LASSO"))
    {
      if (PED::_0x9C81338B2E62CE0A(PLAYER::GET_PLAYER_INDEX(), iLocal_111, 1000) || PED::_0xB7DBB2986B87E230(iLocal_111, 1f))
      {
        return true;
      }
    }
  }
  return false;
}