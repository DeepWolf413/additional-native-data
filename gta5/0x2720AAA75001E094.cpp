// paparazzo2.ysc @ L52794
void func_500()
{
  if (!func_28(Local_2560, uLocal_2915[0]))
  {
    if (func_649(Local_2560) && func_5(uLocal_2915[0]))
    {
      if (!iLocal_2247)
      {
        if (ENTITY::IS_ENTITY_AT_ENTITY(Local_2560, uLocal_2915[0], 5f, 5f, 2.5f, false, true, 0) || ENTITY::IS_ENTITY_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_2919, 20f, 20f, 2f, false, true, 0))
        {
          iLocal_2247 = 1;
        }
        if ((TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(iLocal_2555) && TASK::GET_PED_WAYPOINT_PROGRESS(iLocal_2555) > 24) && ENTITY::IS_ENTITY_IN_ANGLED_AREA(PLAYER::PLAYER_PED_ID(), -43.12919f, 298.2647f, 111.3944f, -67.07028f, 306.1256f, 114.8987f, 9.25f, false, true, 0))
        {
          iLocal_2247 = 1;
        }
      }
      else
      {
        if (ENTITY::IS_ENTITY_PLAYING_ANIM(Local_2560, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", 3))
        {
          TASK::STOP_ANIM_TASK(Local_2560, "RANDOM@CAR_THIEF@waiting_ig_4", "waiting", -4f);
        }
        if (TASK::GET_SCRIPT_TASK_STATUS(Local_2560, -1794415470) != 1)
        {
          TASK::TASK_ENTER_VEHICLE(Local_2560, uLocal_2915[0], -1, -1, 2f, 1, 0);
        }
      }
    }
  }
}