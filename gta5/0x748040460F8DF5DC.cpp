// fm_mission_controller.ysc @ L585711
int func_9634(int iParam0, bool bParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5)
{
  if (func_9652(iParam0, bParam1, 993674639, 0, 0, 0))
  {
    STREAMING::REQUEST_ANIM_DICT(sParam3);
    if (STREAMING::HAS_ANIM_DICT_LOADED(sParam3))
    {
      TASK::TASK_START_SCENARIO_IN_PLACE(iParam0, sParam2, 0, false);
      MISC::CLEAR_BIT(&(uLocal_15709[func_768(bParam1)]), func_767(bParam1));
      return 1;
    }
  }
  else if (TASK::IS_PED_PLAYING_BASE_CLIP_IN_SCENARIO(iParam0) && !MISC::IS_BIT_SET(uLocal_15709[func_768(bParam1)], func_767(bParam1)))
  {
    TASK::PLAY_ANIM_ON_RUNNING_SCENARIO(iParam0, sParam4, sParam5);
    MISC::SET_BIT(&(uLocal_15709[func_768(bParam1)]), func_767(bParam1));
  }
  return 0;
}