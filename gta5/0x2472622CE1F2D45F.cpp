// fm_bj_race_controler.ysc @ L310900
void func_4212(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
  int iVar0;
  
  if (func_2408(iParam0) && iParam4 != 0)
  {
    iVar0 = func_4229(iParam0, iParam1, bParam2, bParam3);
    WEAPON::_ADD_AMMO_TO_PED_BY_TYPE(PLAYER::PLAYER_PED_ID(), iParam4, iVar0);
  }
}