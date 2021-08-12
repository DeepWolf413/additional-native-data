// am_armybase.ysc @ L3311
int func_99(int iParam0)
{
  if (PED::IS_PED_IN_ANY_PLANE(iParam0) || PED::IS_PED_IN_ANY_HELI(iParam0))
  {
    return 1;
  }
  return 0;
}