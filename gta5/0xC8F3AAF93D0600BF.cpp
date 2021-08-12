// appinternet.ysc @ L179255
int func_1878(char* sParam0)
{
  int iVar0;
  
  iVar0 = -1;
  HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
  iVar0 = HUD::END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU("CLOTHES_UNLOCK", 7, sParam0, 1);
  return iVar0;
}