// agency_heist3a.ysc @ L122042
void func_855(int iParam0, int iParam1)
{
  int iVar0;
  char cVar1[24];
  int iVar7;
  
  if (iParam1 != 0)
  {
    StringCopy(&cVar1, "FEED_CREW_S", 24);
    StringIntConCat(&cVar1, iParam1, 24);
    HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(&cVar1);
    iVar0 = 0;
    while (iVar0 < Global_95399[iParam0 /*19*/])
    {
      iVar7 = Global_112293.f_1.f_12[iParam0 /*6*/][iVar0];
      if (!MISC::IS_BIT_SET(Global_112293.f_1.f_118, iVar7))
      {
        HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(func_858(iVar7));
      }
      iVar0++;
    }
    HUD::END_TEXT_COMMAND_THEFEED_POST_TICKER(false, true);
    if (!func_857(56))
    {
      if (!HUD::IS_HELP_MESSAGE_BEING_DISPLAYED())
      {
        func_545("AM_H_CRWLVL", -1);
        func_856(56);
      }
    }
  }
}