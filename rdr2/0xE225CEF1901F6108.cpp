// discoverable_generic_corpse.ysc @ L12931
void func_198(var uParam0, int iParam1, int iParam2)
{
  if (ENTITY::DOES_ENTITY_EXIST(*uParam0))
  {
    if (!PED::GET_PED_CONFIG_FLAG(*uParam0, 186, true))
    {
      PED::SET_PED_CONFIG_FLAG(*uParam0, 186, true);
    }
    if (PED::GET_PED_CONFIG_FLAG(*uParam0, 223, true))
    {
      PED::SET_PED_CONFIG_FLAG(*uParam0, 223, false);
    }
    PERSISTENCE::_0xE225CEF1901F6108(*uParam0, iParam1);
  }
}