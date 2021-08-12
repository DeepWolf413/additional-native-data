// fmmc_launcher.ysc @ L340635
void func_5059(int iParam0, bool bParam1)
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    func_5060();
  }
  Global_2441237.f_3891 = -1;
  Global_2441237.f_3891.f_1 = 0;
  if (!bParam1)
  {
    if (func_20(PLAYER::PLAYER_ID(), 1, 1))
    {
      PED::SET_PED_LEG_IK_MODE(PLAYER::PLAYER_PED_ID(), 2);
      if (!PLAYER::IS_PLAYER_CONTROL_ON(PLAYER::PLAYER_ID()))
      {
        if (!func_48() || iParam0)
        {
          if (!func_10067(PLAYER::PLAYER_ID(), 0))
          {
            func_6126(PLAYER::PLAYER_ID(), 1, 0, 0);
          }
        }
      }
    }
  }
  func_5065(0);
}