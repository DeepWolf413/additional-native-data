// fmmc_launcher.ysc @ L502890
void func_7825(int iParam0, int iParam1, var uParam2, var uParam3, var uParam4, var uParam5, int iParam6)
{
  uParam2->f_694[*uParam3] = iParam1;
  if (iParam0 == iParam1)
  {
    uParam2->f_690 = func_7530(WEAPON::GET_WEAPONTYPE_SLOT(iParam1));
    uParam2->f_691 = 0;
    uParam2->f_692 = *uParam3;
    uParam2->f_693 = WEAPON::GET_WEAPONTYPE_GROUP(iParam0);
    *uParam5 = 1;
    if (!func_147(85))
    {
      func_7528(uParam2);
      func_4908(85);
    }
  }
  else if (!*uParam5)
  {
    if (WEAPON::GET_WEAPONTYPE_GROUP(iParam0) == WEAPON::GET_WEAPONTYPE_GROUP(iParam1))
    {
      uParam2->f_692 = *uParam3 + 1;
    }
  }
  *uParam3++;
  if (*iParam6 == *uParam4 + 1)
  {
    *uParam4 = *iParam6;
  }
}