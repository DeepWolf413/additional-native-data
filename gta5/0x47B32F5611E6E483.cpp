// freemode.ysc @ L726856
void func_10751(int iParam0)
{
  int iVar0;
  bool bVar1;
  bool bVar2;
  
  iVar0 = 10000000;
  if (func_2095(joaat("mpply_fmevn_cheat_start")) > iVar0 && func_2095(joaat("mpply_fmevn_cheat_end")) > iVar0)
  {
    func_19910(joaat("mpply_fmevn_cheat_tally"));
    func_10753(joaat("mpply_fmevn_cheat_start"), -iVar0);
    func_10753(joaat("mpply_fmevn_cheat_end"), -iVar0);
  }
  bVar1 = (func_2095(joaat("mpply_fmevn_cheat_start")) - func_2095(joaat("mpply_fmevn_cheat_end")));
  bVar2 = bVar1;
  if (func_10750(11))
  {
    bVar2 = (bVar2 - func_2095(joaat("mpply_fmevn_cheat_quit")));
    func_2163(joaat("mpply_fmevn_cheat_quit"), bVar1);
    if (iParam0 == 0)
    {
      STATS::_PLAYSTATS_AWARD_BADSPORT(Global_2465681);
      func_10747(11, 1);
      Global_1379108.f_85[11] = 1;
      func_10752(joaat("mpply_overall_badsport"), SYSTEM::TO_FLOAT(bVar2));
    }
  }
}