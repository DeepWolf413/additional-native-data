// am_casino_peds.ysc @ L207083
void func_2015(bool bParam0, int iParam1, int iParam2)
{
  int iVar0;
  int iVar1;
  
  if (func_2016(iParam1, iParam2, &iVar0, &iVar1))
  {
    PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(bParam0, iVar1);
    PLAYER::SET_PLAYER_PARACHUTE_MODEL_OVERRIDE(bParam0, iVar0);
  }
  else
  {
    PLAYER::SET_PLAYER_PARACHUTE_TINT_INDEX(bParam0, 0);
    PLAYER::CLEAR_PLAYER_PARACHUTE_MODEL_OVERRIDE(bParam0);
  }
}