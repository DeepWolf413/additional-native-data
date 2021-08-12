// sadie5.ysc @ L37904
bool func_840(var uParam0)
{
  if (!ENTITY::DOES_ENTITY_EXIST(Local_87[0 /*4*/]))
  {
    if (func_820(uParam0, 11, &(Local_87[0 /*4*/]), 0, 0, 0, 0, 0, 1, -1248623443, 1, 0, 1, 0))
    {
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_87[0 /*4*/], true);
    }
    return false;
  }
  PED::SET_PED_CONFIG_FLAG(Local_87[0 /*4*/], 512, true);
  ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(Local_87[0 /*4*/], true);
  PED::SET_PED_COMBAT_MOVEMENT(Local_87[0 /*4*/], 1);
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 0, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 12, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 119, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(Local_87[0 /*4*/], 30, true);
  PED::SET_PED_COMBAT_RANGE(Local_87[0 /*4*/], 3);
  TASK::_0x013A7BA5015C1372(Local_87[0 /*4*/], 1);
  func_1395(Local_87[0 /*4*/], iLocal_338);
  return true;
}