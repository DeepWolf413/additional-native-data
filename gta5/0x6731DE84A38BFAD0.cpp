// am_mp_arena_box.ysc @ L93291
void func_786(int* iParam0, bool bParam1, bool bParam2)
{
  int iVar0;
  
  if (bParam2)
  {
    func_408(iParam0, 1);
  }
  iVar0 = func_201(7865, -1, 0);
  func_85(7865, iVar0 + 1, -1, 1, 0);
  iParam0->f_8 = iVar0 + 1;
  if (MISC::IS_BIT_SET(iParam0->f_1, 30))
  {
    STATS::_PLAYSTATS_SPECTATOR_WHEEL_SPIN(func_788(), func_787(bParam1), 14, 1);
  }
  else
  {
    STATS::_PLAYSTATS_SPECTATOR_WHEEL_SPIN(func_788(), func_787(bParam1), iParam0->f_102, 1);
  }
  MISC::SET_BIT(iParam0, false);
}