// rcm_sadie11.ysc @ L26763
bool func_813()
{
  if (((BUILTIN::VDIST(Global_36, ENTITY::GET_ENTITY_COORDS(iLocal_430, true, false)) < 15f && !PED::IS_PED_FALLING(Global_35)) && !TASK::IS_PED_GETTING_UP(Global_35)) && PED::IS_PED_ON_FOOT(Global_35))
  {
    return true;
  }
  if (AITRANSPORT::_0xFFEC4B0A1A3ED515(iLocal_760, 0) == Global_35)
  {
    return true;
  }
  else if (func_214(Global_35, iLocal_760, 0, 1) < 7f)
  {
    return true;
  }
  return false;
}