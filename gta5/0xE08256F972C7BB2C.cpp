// fm_bj_race_controler.ysc @ L268883
void func_3529(int iParam0)
{
  int iVar0;
  int iVar1;
  
  iVar0 = func_3530(iParam0);
  if (!func_872())
  {
    MONEY::_NETWORK_EARN_FROM_ARENA_SKILL_LEVEL_PROGRESSION(iVar0, iParam0);
  }
  else
  {
    func_2241(-883876414, iVar0, &iVar1, 0, 0, 0);
    Global_4265506[iVar1 /*85*/].f_66.f_15 = iParam0;
  }
}