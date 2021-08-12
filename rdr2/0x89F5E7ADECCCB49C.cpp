// ambush_exc_road_robbery.ysc @ L10453
bool func_348()
{
  char* sVar0;
  int iVar1;

  if (func_47(&(Local_274.f_58[1 /*3*/]), 1f))
  {
    iVar1 = -1;
    sVar0 = func_512(&Local_15, &Local_274, &iVar1);
    if (func_307(Local_15[0], Global_35, sVar0, -1073741824 /* Float: -2f */, 1, 1744022339, iVar1))
    {
      func_136(&Local_274, 0, 0, 0);
      func_513(1891783641, Local_15[0], 1);
      func_164(Local_15[0], &(Local_15.f_22[0]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
      func_164(Local_15[1], &(Local_15.f_22[1]), -89429847, 580546400, 0, "RE_INTER_STRANGER");
      func_202(&(Local_274.f_58[1 /*3*/]));
      Local_274.f_101 = Local_274.f_98;
      Local_274.f_102 = func_514(26f, (Local_274.f_101 - 8f));
      func_319(3, 3, 2);
      PED::_0x89F5E7ADECCCB49C(Local_15[0], "intimidate");
      return true;
    }
  }
  return false;
}