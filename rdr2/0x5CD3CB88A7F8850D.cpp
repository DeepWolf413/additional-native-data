// rcm_abigail31.ysc @ L35933
void func_1111()
{
  vector3 vVar0;
  struct<27> Var3;
  struct<7> Var41;

  vVar0 = { func_206(17) };
  Var3.f_4 = 1065353216;
  Var3.f_5 = 1065353216;
  Var3.f_9 = 1065353216;
  Var3.f_10 = 1065353216;
  Var3.f_14 = 1065353216;
  Var3.f_15 = 1065353216;
  Var3.f_17 = 1040187392;
  Var3.f_18 = 1040187392;
  Var3.f_19 = -1;
  Var3.f_26 = -1082130432;
  Var41.f_1 = 1050253722;
  Var41.f_2 = 1067030938;
  Var41.f_5 = -1082130432;
  Var41.f_6 = -1082130432;
  func_654(iLocal_67, Global_35, &Var3, vVar0, 0, 0, 1, 1069547520 /* Float: 1.5f */, -1082130432 /* Float: -1f */, 1073069561, 1056964608 /* Float: 0.5f */, 1092616192 /* Float: 10f */, -1, 1, 0, 0, 0, 1);
  func_1124(Global_35, iLocal_67, &Var41, -1, 0, 0);
  func_656(&uLocal_1624);
  if (!PED::IS_PED_HEADTRACKING_PED(Global_35, iLocal_67))
  {
    TASK::TASK_LOOK_AT_ENTITY(Global_35, iLocal_67, -1, 0, 51, 0);
  }
  if (!PED::IS_PED_HEADTRACKING_PED(iLocal_67, Global_35))
  {
    TASK::TASK_LOOK_AT_ENTITY(iLocal_67, Global_35, -1, 0, 51, 0);
  }
}