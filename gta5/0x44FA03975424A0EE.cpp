// freemode.ysc @ L929479
void func_13893(bool bParam0, var uParam1, int iParam2)
{
  if (func_17135())
  {
    if (func_546(uParam1, iParam2, 0))
    {
      if (func_17216(PLAYER::PLAYER_ID(), 0, 1))
      {
        HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("HUD_ILDETIME");
        HUD::ADD_TEXT_COMPONENT_SUBSTRING_TIME(iParam0, 134);
        Global_2465840 = HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER_FORCED(true, true);
      }
    }
  }
}