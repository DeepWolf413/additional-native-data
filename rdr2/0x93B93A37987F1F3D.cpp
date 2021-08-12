// abigail2_1.ysc @ L84041
void func_2521(var uParam0, int iParam1, bool bParam2, var uParam3)
{
  vector3 vVar0;

  if (bParam2)
  {
    TASK::TASK_ACHIEVE_HEADING(0, func_1302(Global_36, *(uParam3[0 /*3*/]), 1), 0);
  }
  TASK::TASK_FOLLOW_POINT_ROUTE(0, 1f, 0, 1056964608 /* Float: 0.5f */, 1084227584 /* Float: 5f */, 1193033728 /* Float: 40000f */);
  if (func_2160(&(uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/]), 2))
  {
    TASK::TASK_ACHIEVE_HEADING(0, uParam0->f_1406[uParam0->f_865[iParam1 /*18*/] /*41*/].f_40, 0);
  }
  else
  {
    vVar0 = { func_2571(uParam0, iParam1) };
    if (!func_386(vVar0))
    {
      TASK::TASK_TURN_PED_TO_FACE_COORD(0, vVar0, -1);
    }
  }
}