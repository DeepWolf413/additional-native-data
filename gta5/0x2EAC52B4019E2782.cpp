// act_cinema.ysc @ L2466
int func_54(bool bParam0, bool bParam1)
{
  if (Global_2441237.f_2012.f_701 != 0)
  {
    return 1;
  }
  if ((((((((!CAM::IS_SCREEN_FADED_IN() || (func_1195(8, -1) && func_55() != 65)) || (HUD::GET_PAUSE_MENU_STATE() != 0 && !bParam1)) || (STREAMING::IS_PLAYER_SWITCH_IN_PROGRESS() && !bParam0)) || NETWORK::IS_COMMERCE_STORE_OPEN()) || Global_77508) || Global_22670.f_8673) || HUD::IS_WARNING_MESSAGE_ACTIVE()) || Global_99422.f_1441)
  {
    return 0;
  }
  return 1;
}