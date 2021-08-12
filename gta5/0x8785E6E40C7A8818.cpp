// re_bikethief.ysc @ L3755
void func_106()
{
  if (((((((((iLocal_125 < 5 && !func_25()) && func_64(iLocal_91)) && func_64(iLocal_92)) && func_73(iLocal_93)) && PED::IS_PED_IN_VEHICLE(iLocal_91, iLocal_93, false)) && ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_91, 13f, 13f, 13f, false, true, 0)) && !ENTITY::IS_ENTITY_AT_ENTITY(iLocal_92, iLocal_91, 13f, 13f, 13f, false, true, 0)) && (MISC::GET_GAME_TIMER() - iLocal_126) > 15000) && func_2(&uLocal_134, "REBTHAU", sLocal_304, 4, 0, 0, 0))
  {
    if (TASK::GET_SCRIPT_TASK_STATUS(iLocal_91, -1273030092) == 1 && !TASK::IS_DRIVEBY_TASK_UNDERNEATH_DRIVING_TASK(iLocal_91))
    {
      TASK::TASK_DRIVE_BY(iLocal_91, PLAYER::PLAYER_PED_ID(), 0, 0f, 0f, 0f, 15f, 50, true, -753768974);
    }
    iLocal_126 = MISC::GET_GAME_TIMER();
    iLocal_125++;
  }
}