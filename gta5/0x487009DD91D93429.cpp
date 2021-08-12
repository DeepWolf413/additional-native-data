// gb_casino_heist_planning.ysc @ L35526
void func_988(var uParam0)
{
  int iVar0;
  
  if (func_529())
  {
    func_517(-1295545795, func_532(), &iVar0, 0, 1, 0);
    Global_4265506[iVar0 /*85*/].f_9 = uParam0->f_2593;
  }
  else
  {
    MONEY::_NETWORK_SPENT_CASINO_HEIST_SKIP_MISSION(uParam0->f_2593, func_532(), 0, 1);
  }
  AUDIO::PLAY_SOUND_FRONTEND(-1, "Highlight_Accept", "DLC_HEIST_PLANNING_BOARD_SOUNDS", true);
  func_1006(1);
  func_989(uParam0);
  func_190(&(uParam0->f_744), 1);
  func_512(-1713398555, 28, 0);
}