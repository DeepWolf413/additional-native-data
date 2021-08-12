// am_pi_menu.ysc @ L447039
void func_6294(int iParam0)
{
  if (func_60())
  {
    Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_76.f_21 = iParam0;
    func_48(10576, iParam0, -1, 1, 0);
    Global_2553660.f_25 = iParam0;
    STATS::_PLAYSTATS_CHANGE_MC_EMBLEM(func_56(func_58()), func_55(func_58()), func_54(), func_53(), iParam0);
  }
}