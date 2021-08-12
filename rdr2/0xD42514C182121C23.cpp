// rcm_callaway3.ysc @ L23128
void func_794(var uParam0, bool bParam1)
{
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_654))
  {
    PED::_SET_RANDOM_OUTFIT_VARIATION(iLocal_654, true);
    PED::_UPDATE_PED_VARIATION(iLocal_654, false, true, true, true, false);
    PED::SET_PED_COMBAT_ABILITY(iLocal_654, 2);
    PED::SET_PED_CONFIG_FLAG(iLocal_654, 186, false);
    WEAPON::REMOVE_ALL_PED_WEAPONS(iLocal_654, true, true);
    WEAPON::_0x899A04AFCC725D04(iLocal_654, WEAPON::_0xD42514C182121C23(iLocal_655));
    WEAPON::SET_PED_DROPS_WEAPONS_WHEN_DEAD(iLocal_654, false);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_654, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_654, 266, true);
    PED::SET_PED_CONFIG_FLAG(iLocal_654, 6, true);
    if (bParam1)
    {
      ENTITY::SET_ENTITY_VISIBLE(iLocal_654, false);
      ENTITY::_SET_ENTITY_COORDS_AND_HEADING(iLocal_654, 2715.926f, 2047.398f, 111.7913f, 0f, true, false, true);
      ENTITY::FREEZE_ENTITY_POSITION(iLocal_654, true);
    }
    else
    {
      ENTITY::SET_ENTITY_VISIBLE(iLocal_654, true);
    }
  }
  func_635(uParam0, iLocal_654, "CALLOWAY", 1);
  func_332(8192);
}