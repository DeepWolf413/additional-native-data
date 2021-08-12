// finalec1.ysc @ L106590
void func_611(bool bParam0)
{
  if (func_793(func_226()))
  {
    TASK::CLEAR_PED_TASKS_IMMEDIATELY(func_226());
    ENTITY::SET_ENTITY_COORDS(func_226(), func_105(20), true, false, false, true);
    ENTITY::SET_ENTITY_HEADING(func_226(), 323.6475f);
    if (!PED::IS_PED_USING_ACTION_MODE(func_226()))
    {
      PED::SET_PED_USING_ACTION_MODE(func_226(), true, -1, 0);
    }
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(func_226(), func_744(0), -1, false, 0f, false, false, iLocal_1903[0], false);
    PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(func_226(), false, false);
    INTERIOR::FORCE_ROOM_FOR_ENTITY(func_226(), iLocal_1733, MISC::GET_HASH_KEY("foundrymainrm"));
  }
  if (func_793(iLocal_96[2]))
  {
    TASK::CLEAR_PED_TASKS_IMMEDIATELY(iLocal_96[2]);
    ENTITY::SET_ENTITY_COORDS(iLocal_96[2], func_105(22), true, false, false, true);
    ENTITY::SET_ENTITY_HEADING(iLocal_96[2], 221.1f);
    INTERIOR::FORCE_ROOM_FOR_ENTITY(func_224(), iLocal_1733, MISC::GET_HASH_KEY("foundrymainrm"));
    if (bParam0)
    {
      iLocal_193 = 0;
      func_612();
    }
  }
}