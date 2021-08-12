// beat_arms_deal.ysc @ L9629
bool func_285(int iParam0, int iParam1)
{
  if (!func_34(iParam0, 0, 1))
  {
    return false;
  }
  if (!func_342(iParam0, Global_35, 0, 20f, 0))
  {
    return false;
  }
  if (PED::_0x2DD4E0E26DFAD97D(iParam0, Global_35, 1110704128 /* Float: 45f */))
  {
    return false;
  }
  if (!PED::IS_PED_FACING_PED(iParam0, Global_35, 90f))
  {
    return false;
  }
  return true;
}