// am_mp_property_int.ysc @ L128173
void func_950(int iParam0, int iParam1, int iParam2)
{
  if (PED::IS_PED_COMPONENT_VARIATION_VALID(iParam0, 6, iParam1, iParam2))
  {
    PED::SET_PED_COMPONENT_VARIATION(iParam0, 6, iParam1, iParam2, 0);
  }
}