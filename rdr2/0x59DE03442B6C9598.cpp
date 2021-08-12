// shop_bait.ysc @ L7719
void func_190(var uParam0)
{
  int iVar0;
  int iVar1;

  if (!WEAPON::IS_WEAPON_VALID(uParam0->f_1))
  {
    return;
  }
  if (uParam0->f_205)
  {
    return;
  }
  iVar0 = 0;
  while (iVar0 < uParam0->f_206)
  {
    if ((uParam0->f_3[iVar0] != 0 && func_508(uParam0->f_3[iVar0]) == joaat("WEAPON_MOD")) && !func_360(uParam0->f_3[iVar0], 1844906744))
    {
      iVar1 = WEAPON::_GET_WEAPON_COMPONENT_TYPE_MODEL(uParam0->f_3[iVar0]);
      if (STREAMING::IS_MODEL_VALID(iVar1))
      {
        STREAMING::REQUEST_MODEL(iVar1, false);
      }
    }
    iVar0++;
  }
}