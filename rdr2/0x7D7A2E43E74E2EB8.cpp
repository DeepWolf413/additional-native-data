// ambush_inb_forest.ysc @ L14811
bool func_532()
{
  struct<4> Var0;
  int iVar4;
  int iVar5;

  if (!func_61(Local_15.f_56, 0, 1))
  {
    Local_15.f_56 = Global_1935630.f_41;
  }
  if (!func_61(Local_15.f_56, 0, 1))
  {
    return false;
  }
  Var0 = { func_678(&Local_274) };
  iVar4 = func_97(0);
  Local_274.f_317[0] = PED::_0xEAF682A14F8E5F53(Local_274.f_321, Var0, Var0.f_3, 1, 1, 1, 0);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_274.f_317[0], true);
  PED::REQUEST_PED_VISIBILITY_TRACKING(Local_274.f_317[0]);
  func_127(Local_274.f_317[0], func_126(0, 1), 0);
  func_124(func_123(Local_274.f_317[0]), Local_274.f_317[0]);
  WEAPON::REMOVE_ALL_PED_WEAPONS(Local_274.f_317[0], false, true);
  iVar5 = joaat("WEAPON_MELEE_KNIFE");
  func_469(&Local_15, Local_274.f_317[0], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0);
  func_468(Local_274.f_317[0], iVar5, -1, 0, 0, 1056964608 /* Float: 0.5f */, 1065353216 /* Float: 1f */, 0);
  return true;
}