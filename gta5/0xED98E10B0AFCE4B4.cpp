// triathlonsp.ysc @ L95851
void func_567(int* iParam0)
{
  int iVar0;
  float fVar1;
  struct<3> Var2;
  
  iVar0 = 1;
  while (iVar0 < 8)
  {
    if (func_412(iParam0, &(iParam0->f_1735[iVar0 /*206*/])) == 2)
    {
      if (TASK::GET_SCRIPT_TASK_STATUS(iParam0->f_1735[iVar0 /*206*/].f_8, -1689270312) == 1)
      {
        fVar1 = (IntToFloat(iVar0) / 8f);
        Var2 = { func_568(3f, 3f, 0f, -3f, -3f, 0f, fVar1) };
        TASK::SET_PED_WAYPOINT_ROUTE_OFFSET(iParam0->f_1735[iVar0 /*206*/].f_8, Var2);
      }
    }
    iVar0++;
  }
}