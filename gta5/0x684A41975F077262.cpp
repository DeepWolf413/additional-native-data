// camhedz_arcade.ysc @ L100706
int func_1005()
{
  bool bVar0;
  
  if (func_1011())
  {
    return 1;
  }
  if (Global_2464661)
  {
    return 1;
  }
  bVar0 = (NETWORK::NETWORK_IS_IN_MP_CUTSCENE() && !func_1010());
  if (((((((((bVar0 == 0 || func_1009() == 1) && func_1008() == 0) && func_1007(0) == 0) && func_1007(2) == 0) && func_1007(1) == 0) && func_1006(PLAYER::PLAYER_ID()) == 0) && HUD::IS_SOCIAL_CLUB_ACTIVE() == 0) && MISC::IS_BIT_SET(Global_2544210.f_1795, 12) == 0) && MISC::_IS_IN_POWER_SAVING_MODE() == 0)
  {
    return 0;
  }
  return 1;
}