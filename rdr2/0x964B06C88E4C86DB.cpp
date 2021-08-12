// region_law_guama_fussar.ysc @ L1316
void func_42(int iParam0, int iParam1)
{
  vector3 vVar0;
  int iVar3;
  int iVar4;

  vVar0 = { 0f, 0f, 0f };
  iVar3 = -1;
  if ((!func_43(iParam1, -1253019028) && !func_43(iParam1, 780511057)) && !func_43(iParam1, joaat("SCRIPT_TASK_POLICE")))
  {
    iVar4 = 0;
    while (iVar4 < *iParam0)
    {
      if ((iParam0[iVar4 /*15*/])->f_1 == iParam1)
      {
        vVar0 = { func_39(iParam0[iVar4 /*15*/]) };
        iVar3 = iVar4;
      }
      iVar4++;
    }
    if (!func_35(vVar0))
    {
      TASK::TASK_POLICE(iParam1, true);
      TASK::_TASK_PATROL_2(iParam1, (*iParam0)[iVar3 /*15*/], 1, vVar0, 0, 1);
    }
  }
}