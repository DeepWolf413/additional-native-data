// coachrobberies.ysc @ L20212
void func_590(var uParam0, var uParam1, int iParam2)
{
  if (!func_53(*uParam1, 0))
  {
    *uParam1 = func_897(uParam1->f_1, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 0, 1, 1, 0, 1, 1, !uParam1->f_3, 0, 0, 0, 0);
    if (uParam1->f_3)
    {
      func_898(*uParam1, uParam1->f_2);
    }
  }
  PED::SET_PED_RELATIONSHIP_GROUP_HASH(*uParam1, iParam2);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*uParam1, true);
  PED::SET_PED_INTO_VEHICLE(*uParam1, uParam0->f_1, 3);
  PED::SET_PED_CAN_BE_KNOCKED_OFF_VEHICLE(*uParam1, 1);
  PED::SET_PED_CONFIG_FLAG(*uParam1, 2, true);
  func_338(*uParam1, 1);
  ENTITY::_0x18FF3110CF47115D(*uParam1, 1, 0);
  ENTITY::SET_ENTITY_LOD_DIST(*uParam1, 300);
  PED::SET_PED_COMBAT_ABILITY(*uParam1, 2);
  PED::SET_PED_ACCURACY(*uParam1, 80);
  CAM::_0x986F7A51EE3E1F92(*uParam1, 0);
  func_902(*uParam1, 0);
  AUDIO::ADD_ENTITY_TO_AUDIO_MIX_GROUP(*uParam1, "Robberies_Coach_Target_Group", 0f);
}