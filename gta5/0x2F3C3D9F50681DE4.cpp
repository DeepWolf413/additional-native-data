// am_casino_limo.ysc @ L49773
void func_465(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
  {
    PED::SET_PED_AS_ENEMY(iParam0, false);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iParam0, true);
    ENTITY::SET_ENTITY_CAN_BE_DAMAGED(iParam0, false);
    PED::SET_PED_RESET_FLAG(iParam0, 249, true);
    PED::SET_PED_CONFIG_FLAG(iParam0, 185, true);
    PED::SET_PED_CAN_EVASIVE_DIVE(iParam0, false);
    PED::_0x2F3C3D9F50681DE4(iParam0, true);
    PED::SET_PED_CAN_RAGDOLL_FROM_PLAYER_IMPACT(iParam0, false);
    PED::SET_PED_CONFIG_FLAG(iParam0, 208, true);
    PED::SET_PED_CONFIG_FLAG(iParam0, 118, false);
    PED::SET_PED_CONFIG_FLAG(iParam0, 202, true);
    PED::SET_PED_CAN_RAGDOLL(iParam0, false);
  }
}