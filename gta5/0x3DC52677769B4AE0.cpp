// shoprobberies.ysc @ L11557
void func_250()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 3)
  {
    if (!ENTITY::IS_ENTITY_DEAD(Local_68.f_46[iVar0], false))
    {
      if (!TASK::IS_PED_RUNNING_ARREST_TASK(Local_68.f_46[iVar0]))
      {
        TASK::CLEAR_PED_TASKS(Local_68.f_46[iVar0]);
        TASK::TASK_ARREST_PED(Local_68.f_46[iVar0], Local_68);
      }
    }
    iVar0++;
  }
}