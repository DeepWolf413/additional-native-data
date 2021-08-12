// rural_bank_heist.ysc @ L102124
void func_599()
{
  if ((MISC::GET_GAME_TIMER() - iLocal_2016) > 10000)
  {
    if (!PED::IS_PED_INJURED(Local_1190.f_1))
    {
      if (!ENTITY::IS_ENTITY_DEAD(iLocal_1054, false))
      {
        PED::SET_PED_FIRING_PATTERN(Local_1190.f_1, 1566631136);
        TASK::TASK_VEHICLE_SHOOT_AT_COORD(Local_1190.f_1, ENTITY::GET_ENTITY_COORDS(iLocal_1054, true), 20f);
        ENTITY::SET_ENTITY_PROOFS(iLocal_1054, false, false, false, false, false, false, false, false);
        ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_1054);
        STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(joaat("bulldozer"));
        iLocal_2016 = MISC::GET_GAME_TIMER();
      }
      else
      {
        PED::SET_PED_FIRING_PATTERN(Local_1190.f_1, 1566631136);
        TASK::TASK_VEHICLE_SHOOT_AT_PED(Local_1190.f_1, PLAYER::PLAYER_PED_ID(), 20f);
        iLocal_2016 = MISC::GET_GAME_TIMER();
      }
    }
  }
}