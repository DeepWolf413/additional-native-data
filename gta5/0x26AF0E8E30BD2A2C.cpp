// am_pi_menu.ysc @ L399677
int func_5743(int iParam0)
{
  if (func_5738())
  {
    return 1;
  }
  if (func_5737())
  {
    return 1;
  }
  if (((((((((((((((((((((((((((PLAYER::IS_PLAYER_FREE_FOR_AMBIENT_TASK(PLAYER::PLAYER_ID()) && iParam0 == 1) || iParam0 == 0) && func_5731()) && !PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), true)) && (TASK::IS_PED_RUNNING(PLAYER::PLAYER_PED_ID()) == 0 || func_5747())) && !TASK::IS_PED_SPRINTING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_RAGDOLL(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_DIVING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_FALLING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_SHOOTING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_PRONE(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_GOING_INTO_COVER(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_CLIMBING(PLAYER::PLAYER_PED_ID())) && (TASK::IS_PED_STRAFING(PLAYER::PLAYER_PED_ID()) == 0 || func_5747())) && !PED::IS_PED_JUMPING(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_HANGING_ON_TO_VEHICLE(PLAYER::PLAYER_PED_ID())) && !TASK::IS_PED_ACTIVE_IN_SCENARIO(PLAYER::PLAYER_PED_ID())) && !PED::IS_PED_VAULTING(PLAYER::PLAYER_PED_ID())) && !PED::_IS_PED_OPENING_A_DOOR(PLAYER::PLAYER_PED_ID())) && !PED::GET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 58)) && !func_5746()) && !func_5744()) && !Global_2453903.f_3478.f_26) && !PED::IS_PED_TAKING_OFF_HELMET(PLAYER::PLAYER_PED_ID())) && !func_352(PLAYER::PLAYER_ID())) && !Global_2518926)
  {
    return 1;
  }
  return 0;
}