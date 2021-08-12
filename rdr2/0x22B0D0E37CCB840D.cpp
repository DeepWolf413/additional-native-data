// av_get_directions.ysc @ L2815
void func_69(var uParam0)
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < 2)
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_20[iVar0 /*14*/]) && !ENTITY::IS_ENTITY_DEAD(uParam0->f_20[iVar0 /*14*/]))
    {
      TASK::CLEAR_PED_TASKS(uParam0->f_20[iVar0 /*14*/], true, false);
      TASK::TASK_SMART_FLEE_PED(uParam0->f_20[iVar0 /*14*/], Global_35, -1f, -1, 0, 1077936128 /* Float: 3f */, 0);
    }
    iVar0++;
  }
}