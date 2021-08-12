// exile1.ysc @ L126105
void func_943()
{
  int iVar0;
  
  if (func_12() == 0)
  {
    iVar0 = PLAYER::PLAYER_PED_ID();
  }
  else
  {
    iVar0 = uLocal_433[0];
  }
  if (ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
    {
      if (!PED::IS_PED_INJURED(iVar0))
      {
        iLocal_2412 = PED::CREATE_SYNCHRONIZED_SCENE(Local_2419, Local_2422, 2);
        ENTITY::FREEZE_ENTITY_POSITION(iVar0, false);
        ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iVar0, true);
        TASK::CLEAR_PED_TASKS(iVar0);
        TASK::TASK_SYNCHRONIZED_SCENE(iVar0, iLocal_2412, sLocal_2407, "Michael_inTrailer", 1000f, -1000f, 4, 0, 1000f, 1);
        PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(iVar0, false, false);
        PED::SET_SYNCHRONIZED_SCENE_RATE(iLocal_2412, 1f);
      }
    }
  }
}