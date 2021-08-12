// fm_bj_race_controler.ysc @ L310891
void func_4211(int iParam0, int iParam1, bool bParam2, bool bParam3, var uParam4, bool bParam5, bool bParam6, int iParam7)
{
  int iVar0;
  
  iVar0 = func_4229(iParam0, iParam1, bParam2, bParam3);
  WEAPON::_SET_WEAPON_DAMAGE_MODIFIER_THIS_FRAME(iParam0, (*uParam4)[iParam1]);
  func_4217(iParam0, iVar0, func_4227(iParam1, bParam2, bParam3), bParam5, bParam6, iParam7, 1);
}