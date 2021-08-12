// camp_beaverhollow.ysc @ L3748
void func_99()
{
  int iVar0;

  func_455(Local_18.f_1786.f_6, &(Local_18.f_1786.f_4), 0, 0, 0, 1084227584 /* Float: 5f */, 100, 0, 0);
  if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_6) && !ENTITY::IS_ENTITY_DEAD(Local_18.f_1786.f_6))
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_18.f_1786.f_9))
    {
      TASK::OPEN_SEQUENCE_TASK(&iVar0);
      if (PED::IS_PED_ON_MOUNT(Global_35))
      {
        TASK::TASK_DISMOUNT_ANIMAL(0, 0, 0, 0, 0, 0);
      }
      TASK::TASK_PICKUP_CARRIABLE_ENTITY(0, Local_18.f_1786.f_9);
      TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(0, Local_18.f_1786.f_9, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Local_18.f_1786.f_6, 0f, -1.5f, 0f), 1f, 8);
      if (func_366(16))
      {
        if (PED::_IS_PED_HOGTIED(Local_18.f_1786.f_9))
        {
          ENTITY::_0x18FF3110CF47115D(Local_18.f_1786.f_9, 1, 1);
          TASK::_TASK_CUT_FREE_HOGTIED_TARGET_PED(0, Local_18.f_1786.f_9);
        }
      }
      func_457(Global_35, &iVar0, 0, 0, 1, 1);
      Local_18.f_1786.f_1 = MISC::GET_GAME_TIMER() + 500;
    }
  }
}