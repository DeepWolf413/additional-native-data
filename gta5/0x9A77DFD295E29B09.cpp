// stripclub.ysc @ L3855
int func_151(int iParam0)
{
  if (!PED::IS_PED_INJURED(iParam0))
  {
    if (func_1042())
    {
      if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
      {
        return 0;
      }
    }
    if (PED::IS_PED_USING_ANY_SCENARIO(iParam0))
    {
      PED::_0x9A77DFD295E29B09(iParam0, true);
      return 1;
    }
    else
    {
      func_152(iParam0);
    }
  }
  return 0;
}