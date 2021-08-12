// abigail21_outro.ysc @ L1291
bool func_66(int iParam0)
{
  if (PED::IS_PED_INJURED(iParam0))
  {
    return false;
  }
  return PED::IS_PED_ON_MOUNT(iParam0);
}