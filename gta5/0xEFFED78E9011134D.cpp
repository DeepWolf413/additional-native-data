// fmmc_launcher.ysc @ L463515
int func_7523(int iParam0)
{
  int iVar0;
  struct<2> Var1;
  
  if (iParam0 >= 44)
  {
    iVar0 = (iParam0 - 44);
    if (iVar0 < FILES::GET_NUM_DLC_WEAPONS())
    {
      if (FILES::GET_DLC_WEAPON_DATA(iVar0, &Var1))
      {
        return Var1.f_1;
      }
    }
  }
  else if (func_7485(iParam0) != 0)
  {
    return WEAPON::GET_PED_WEAPONTYPE_IN_SLOT(PLAYER::PLAYER_PED_ID(), func_7485(iParam0));
  }
  return 0;
}