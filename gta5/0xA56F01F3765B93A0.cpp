// agency_heist3a.ysc @ L12456
void func_133(var uParam0)
{
  MISC::CLEAR_AREA(uParam0->f_11, 4f, true, false, false, false);
  *uParam0 = PED::CREATE_PED(26, uParam0->f_1, uParam0->f_11, uParam0->f_17, true, true);
  ENTITY::SET_ENTITY_HEALTH(*uParam0, uParam0->f_18, 0);
  PED::SET_PED_DIES_WHEN_INJURED(*uParam0, true);
  PED::SET_PED_CAN_BE_TARGETTED(*uParam0, false);
  PED::SET_PED_SUFFERS_CRITICAL_HITS(*uParam0, false);
  PED::SET_PED_CAN_EVASIVE_DIVE(*uParam0, false);
  ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(*uParam0, false, 0f);
  PED::SET_PED_CAN_RAGDOLL(*uParam0, true);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam0, true);
  uParam0->f_24 = 1;
}