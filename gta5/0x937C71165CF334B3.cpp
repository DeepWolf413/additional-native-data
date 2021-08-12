// am_mp_auto_shop.ysc @ L143408
int func_1163(var uParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  iVar0 = 0;
  if (STREAMING::IS_MODEL_VALID(uParam0->f_92[iParam1 /*16*/].f_11) && uParam0->f_92[iParam1 /*16*/].f_11 != 0)
  {
    iVar0 = 1;
  }
  if (iVar0 && !uParam0->f_92[iParam1 /*16*/].f_3)
  {
    return 1;
  }
  iVar1 = 0;
  if (WEAPON::IS_WEAPON_VALID(uParam0->f_92[iParam1 /*16*/].f_10) && uParam0->f_92[iParam1 /*16*/].f_10 != 0)
  {
    iVar1 = 1;
  }
  return (iVar0 && iVar1);
}