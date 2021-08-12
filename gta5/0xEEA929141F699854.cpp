// am_mp_arena_garage.ysc @ L381668
void func_6269()
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_320.f_466) && !PED::IS_PED_INJURED(Local_320.f_466))
  {
    ENTITY::FREEZE_ENTITY_POSITION(Local_320.f_466, false);
    ENTITY::SET_ENTITY_ROTATION(Local_320.f_466, PED::GET_ANIM_INITIAL_OFFSET_ROTATION(func_6273(), func_6270(), func_6272(), func_6271(), 0f, 2), 2, true);
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_320.f_466, PED::GET_ANIM_INITIAL_OFFSET_POSITION(func_6273(), func_6270(), func_6272(), func_6271(), 0f, 2), false, false, true);
    TASK::TASK_SYNCHRONIZED_SCENE(Local_320.f_466, Local_320.f_465, func_6273(), func_6270(), 1000f, -1000f, 4, 0, 1000f, 0);
  }
}