// act_bankrobbery01.ysc @ L21214
void func_540(var uParam0, var uParam1, var uParam2, int iParam3)
{
  int iVar0;

  if (func_1018(uParam1, uParam2, iParam3))
  {
    if (!func_1019(uParam2, iParam3))
    {
      iVar0 = func_1020(uParam1, uParam2, iParam3);
      if (ENTITY::DOES_ENTITY_EXIST(iVar0))
      {
        TASK::TASK_LOOK_AT_ENTITY(uParam2->f_40[iParam3], iVar0, -1, 33794, 51, 1);
        func_1021(uParam2, iParam3, 1);
      }
    }
  }
  else if (func_610(&(uParam0->f_31[func_1022(iParam3) /*3*/]), 1f, 1, 1))
  {
    if (func_1019(uParam2, iParam3))
    {
      TASK::TASK_CLEAR_LOOK_AT(uParam2->f_40[iParam3]);
      func_1021(uParam2, iParam3, 0);
    }
  }
}