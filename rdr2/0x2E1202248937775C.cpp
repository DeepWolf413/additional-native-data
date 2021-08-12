// abigail2_1.ysc @ L43882
void func_1066(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;

  if ((WEAPON::GET_AMMO_IN_CLIP(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0))
  {
    iVar1 = func_1548(WEAPON::_GET_WEAPON_CLIP_SIZE(iParam0), iParam1);
    WEAPON::SET_AMMO_IN_CLIP(Global_35, iParam0, iVar1);
  }
}