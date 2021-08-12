// act_caunc_rustling.ysc @ L57755
bool func_1570(int iParam0, int* iParam1)
{
  bool bVar0;
  bool bVar1;

  if (iParam1->f_11 & 1 != 0)
  {
    if (PED::_IS_PED_LASSOED(iParam0))
    {
      return true;
    }
  }
  if (iParam1->f_11 & 2 != 0)
  {
    if (PED::_IS_PED_HOGTIED(iParam0))
    {
      return true;
    }
  }
  bVar0 = iParam1->f_11 & 4 != false;
  bVar1 = iParam1->f_11 & 8 != false;
  if (bVar0 || bVar1)
  {
    if (PED::IS_PED_IN_COMBAT(iParam0, func_1839((bVar1 && !bVar0), Global_35, 0)))
    {
      return true;
    }
  }
  return false;
}