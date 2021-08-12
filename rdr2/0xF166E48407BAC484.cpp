// act_fishing06.ysc @ L30539
void func_857(int iParam0)
{
  int iVar0;
  float fVar1;

  iVar0 = 1;
  while (iVar0 <= 3)
  {
    if (iParam0->f_14[iVar0] != 7 && ENTITY::IS_ENTITY_DEAD(iParam0->f_80[iVar0]))
    {
      func_499(&(iParam0->f_128), 1048576);
      func_1183(&(iParam0->f_14[iVar0]), 7);
    }
    fVar1 = func_827(Global_35, iParam0->f_80[iVar0], 1, 1);
    if (fVar1 < 5f || ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0->f_80[iVar0], Global_35, 0, 1))
    {
      if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_80[iVar0], 780511057, true) != 1)
      {
        TASK::TASK_COMBAT_PED(iParam0->f_80[iVar0], Global_35, 0, 0);
      }
      func_499(&(iParam0->f_128), 2097152);
    }
    func_1184(iParam0);
    iVar0++;
  }
}