// am_pi_menu.ysc @ L429495
void func_6129(bool bParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;
  
  if (func_794(iParam1, iParam2, &iVar0, &iVar1))
  {
    PLAYER::SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(bParam0, iVar1);
    PLAYER::_SET_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(bParam0, iVar0);
  }
  else
  {
    PLAYER::SET_PLAYER_RESERVE_PARACHUTE_TINT_INDEX(bParam0, 0);
    PLAYER::_CLEAR_PLAYER_RESERVE_PARACHUTE_MODEL_OVERRIDE(bParam0);
  }
}