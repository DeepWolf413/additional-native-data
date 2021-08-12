// abigail2_1.ysc @ L28764
int func_575(int iParam0, bool bParam1, bool bParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;

  if (!func_571(iParam0, 0))
  {
    return 0;
  }
  iVar0 = func_590(iParam0);
  if (iVar0 == joaat("AMMO") || (bParam1 && iVar0 == joaat("WEAPON")))
  {
    iVar1 = func_1040(iParam0, 1);
    if (iVar1 != 0)
    {
      return WEAPON::GET_PED_AMMO_BY_TYPE(Global_35, iVar1);
    }
  }
  else if (iVar0 == joaat("WEAPON"))
  {
    return func_1041(iParam0, 0);
  }
  iVar2 = INVENTORY::_0xE787F05DFC977BDE(func_971(bParam2), iParam0, 0);
  return iVar2;
}