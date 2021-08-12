// ambush_exc_road_robbery.ysc @ L10787
bool func_359()
{
  float fVar0;
  char* sVar1;
  int iVar2;

  fVar0 = 5f;
  if (func_344() || func_526())
  {
    fVar0 = (fVar0 + 3f);
  }
  if ((func_47(&(Local_274.f_58[1 /*3*/]), fVar0) && !func_126(&Local_274, 4)) && func_331(0, 1, Global_35, 1))
  {
    iVar2 = -1;
    sVar1 = func_527(&Local_15, &Local_274, 1, &iVar2);
    if (func_307(Local_15[1], Global_35, sVar1, -1073741824 /* Float: -2f */, 1, 1744022339, iVar2))
    {
      PED::_0x8ACC0506743A8A5C(Local_15[0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
      WEAPON::SET_CURRENT_PED_WEAPON(Local_15[0], WEAPON::GET_BEST_PED_WEAPON(Local_15[0], false, false), false, 0, false, false);
      TASK::TASK_SWAP_WEAPON(Local_15[0], 1, 0, 0, 0);
      TASK::TASK_AIM_GUN_AT_ENTITY(Local_15[0], Global_35, -1, false, 1);
      func_202(&(Local_274.f_58[1 /*3*/]));
      return true;
    }
  }
  return false;
}