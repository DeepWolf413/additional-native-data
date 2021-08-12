// act_caunc_rustling.ysc @ L47004
void func_1253(var uParam0, var uParam1)
{
  int iVar0;

  if (ENTITY::DOES_ENTITY_EXIST(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)) && !ENTITY::IS_ENTITY_DEAD(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2)))
  {
    iVar0 = ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2);
    if (!func_209(&(uParam0->f_210.f_43)) || func_223(iVar0, uParam0->f_494, 1) < 5f)
    {
      func_238(&(uParam0->f_210.f_43));
    }
    func_1640(uParam0, &iVar0);
    if (func_1639(iVar0, -1775383291))
    {
      if (TASK::GET_SCRIPT_TASK_STATUS(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(uParam1->f_2), -1775383291, true) != 0)
      {
        if ((PED::IS_PED_ON_MOUNT(iVar0) && !uParam0->f_693) || uParam0->f_693)
        {
          TASK::_0x3FFCD7BBA074CC80(iVar0, uParam0->f_494, 0f, 0f, 0f, 1.25f, 2f);
        }
        else
        {
          TASK::CLEAR_PED_TASKS(iVar0, true, false);
        }
      }
    }
    if ((BUILTIN::VDIST2(ENTITY::GET_ENTITY_COORDS(iVar0, false, false), uParam0->f_494) > (5f * 5f) && !func_259(iVar0, -1775383291)) && ((PED::IS_PED_ON_MOUNT(iVar0) && !uParam0->f_693) || uParam0->f_693))
    {
      TASK::TASK_FOLLOW_TO_OFFSET_OF_COORD(iVar0, uParam0->f_494, 0f, 0f, 0f, 1.25f, -1, 2f, 1, 1, 1, 0, 1);
    }
  }
}