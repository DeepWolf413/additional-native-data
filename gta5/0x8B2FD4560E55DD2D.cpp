// mission_triggerer_b.ysc @ L118531
void func_1066()
{
  func_686(&(Global_95867.f_209), 0);
  PED::REMOVE_RELATIONSHIP_GROUP(Global_95867.f_42);
  func_678(&(Global_95867.f_44), 4);
  PED::REMOVE_SCENARIO_BLOCKING_AREA(Global_95867.f_43, false);
  if (PED::IS_SYNCHRONIZED_SCENE_RUNNING(iLocal_507))
  {
    if (MISC::IS_BIT_SET(iLocal_504, 3))
    {
      AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_507);
    }
  }
  else
  {
    iLocal_507 = PED::CREATE_SYNCHRONIZED_SCENE(Local_511, Local_520, 2);
    AUDIO::PLAY_SYNCHRONIZED_AUDIO_EVENT(iLocal_507);
    AUDIO::STOP_SYNCHRONIZED_AUDIO_EVENT(iLocal_507);
  }
  if (MISC::IS_BIT_SET(iLocal_504, 7))
  {
    OBJECT::DOOR_SYSTEM_SET_HOLD_OPEN(-925491840, false);
    OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(-925491840, 0, false, true);
    MISC::CLEAR_BIT(&iLocal_504, 7);
  }
}