// am_mp_arena_box.ysc @ L82240
void func_573(int iParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = func_572(iParam0);
  if (!func_392())
  {
    func_575(iVar0);
    MONEY::_NETWORK_EARN_FROM_ARENA_CAREER_PROGRESSION(iVar0, iParam0);
  }
  else
  {
    func_380(func_574(iParam0), iVar0, &iVar1, 0, 0, 0);
    Global_4265506[iVar1 /*85*/].f_66.f_15 = iParam0;
  }
}