// re_chasethieves.ysc @ L36719
void func_337(int iParam0)
{
  if (func_1(iParam0))
  {
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 1, false);
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 13, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(iParam0, 3, false);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
    PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 128, true);
    PED::SET_PED_FLEE_ATTRIBUTES(iParam0, 512, true);
    PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
    ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(iParam0, true, 0f);
    PED::SET_PED_CONFIG_FLAG(iParam0, 42, true);
    PED::SET_PED_CONFIG_FLAG(iParam0, 36, true);
    PED::SET_PED_CONFIG_FLAG(iParam0, 101, true);
    PED::SET_PED_CONFIG_FLAG(iParam0, 281, true);
    PED::SET_PED_CONFIG_FLAG(iParam0, 20, false);
    PED::SET_PED_GET_OUT_UPSIDE_DOWN_VEHICLE(iParam0, true);
    PED::SET_PED_PLAYS_HEAD_ON_HORN_ANIM_WHEN_DIES_IN_VEHICLE(iParam0, true);
    ENTITY::SET_ENTITY_LOAD_COLLISION_FLAG(iParam0, true, 1);
    PED::SET_PED_RELATIONSHIP_GROUP_HASH(iParam0, iLocal_578);
    PED::SET_PED_MONEY(iParam0, 0);
    PED::SET_PED_ACCURACY(iParam0, 15);
    PED::SET_PED_RESET_FLAG(iParam0, 237, true);
    AUDIO::SET_AMBIENT_VOICE_NAME(iParam0, "G_M_Y_Lost_02_WHITE_FULL_01");
  }
}