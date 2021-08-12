// fm_mission_controller.ysc @ L684015
int func_11346()
{
  if (func_49(&iLocal_58957))
  {
    return 0;
  }
  if (((((((((((PED::IS_PED_JUMPING(iLocal_3286) || TASK::IS_PED_SPRINTING(iLocal_3286)) || PED::IS_PED_RAGDOLL(iLocal_3286)) || PED::IS_PED_CLIMBING(iLocal_3286)) || PED::IS_PED_DEAD_OR_DYING(iLocal_3286, true)) || PED::_0xC30BDAEE47256C13(iLocal_3286)) || PED::IS_PED_GOING_INTO_COVER(iLocal_3286)) || PED::IS_PED_VAULTING(iLocal_3286)) || PED::IS_PED_IN_COVER(iLocal_3286, false)) || PED::GET_PED_CONFIG_FLAG(iLocal_3286, 78, true)) || Local_31280[bLocal_3288 /*292*/].f_27 > -1) || MISC::IS_BIT_SET(bLocal_14865, 27))
  {
    return 0;
  }
  return 1;
}