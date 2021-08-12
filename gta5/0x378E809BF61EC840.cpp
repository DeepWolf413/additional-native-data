// fm_bj_race_controler.ysc @ L207141
int func_2647(bool bParam0)
{
  int iVar0;
  
  iVar0 = -1;
  HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("LBD_VOTE_TICK");
  HUD::ADD_TEXT_COMPONENT_INTEGER(iParam0);
  iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER_WITH_TOKENS(false, true);
  return iVar0;
}