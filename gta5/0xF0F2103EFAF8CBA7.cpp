// benchmark.ysc @ L2085
void func_79()
{
  struct<3> Var0;
  struct<3> Var3;
  
  if ((iLocal_64 == 4 && iLocal_151 > -1) && (MISC::GET_GAME_TIMER() - iLocal_159) > (iLocal_151 - 5000))
  {
    if (!func_540(iLocal_154))
    {
      Var0 = { VEHICLE::GET_POSITION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(iLocal_156, sLocal_157), fLocal_158) };
      Var3 = { VEHICLE::GET_ROTATION_OF_VEHICLE_RECORDING_ID_AT_TIME(VEHICLE::GET_VEHICLE_RECORDING_ID(iLocal_156, sLocal_157), fLocal_158) };
      iLocal_154 = VEHICLE::CREATE_VEHICLE(iLocal_155, Var0, Var3.f_2, true, true, false);
      ENTITY::SET_ENTITY_INVINCIBLE(iLocal_154, true);
      VEHICLE::SET_VEHICLE_ENGINE_ON(iLocal_154, true, true, false);
      VEHICLE::SET_VEHICLE_CAN_BE_VISIBLY_DAMAGED(iLocal_154, false);
      VEHICLE::SET_VEHICLE_CAN_BREAK(iLocal_154, false);
      ENTITY::SET_ENTITY_PROOFS(iLocal_154, true, true, true, true, true, false, false, false);
      VEHICLE::CONTROL_LANDING_GEAR(iLocal_154, 3);
      ENTITY::SET_ENTITY_LOD_DIST(iLocal_154, 5000);
      VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(iLocal_154, iLocal_156, sLocal_157, true);
      if (VEHICLE::IS_PLAYBACK_GOING_ON_FOR_VEHICLE(iLocal_154))
      {
        VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(iLocal_154, fLocal_158);
      }
      PED::SET_PED_INTO_VEHICLE(PLAYER::PLAYER_PED_ID(), iLocal_154, -1);
      iLocal_151 = -1;
      fLocal_241 = 2f;
      fLocal_242 = 2f;
      fLocal_243 = 1f;
    }
  }
}