// act_hunting_2.ysc @ L21349
void func_584()
{
  int iVar0;
  int iVar1;

  iVar1 = 20;
  while (iVar1 <= 31)
  {
    iVar0 = iVar1;
    if (ENTITY::DOES_ENTITY_EXIST(Local_15.f_307[iVar1]))
    {
      if (!Local_15.f_273[iVar0])
      {
        TASK::TASK_FLY_AWAY(Local_15.f_307[iVar1], Global_35);
      }
    }
    iVar1++;
  }
}