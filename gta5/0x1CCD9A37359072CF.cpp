// abigail1.ysc @ L34001
void func_202()
{
  char cVar0[64];
  char cVar16[64];
  char* sVar32;
  
  StringCopy(&cVar0, HUD::_GET_LABEL_TEXT(&(Global_1878[Global_8354 /*29*/].f_7)), 64);
  if (Global_8373 == 0)
  {
    HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("");
    StringCopy(&cVar16, HUD::_GET_LABEL_TEXT(&(Global_8278[1 /*6*/])), 64);
    sVar32 = HUD::_GET_LABEL_TEXT("CELL_253");
    HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, sVar32, &cVar16);
  }
  else
  {
    HUD::BEGIN_TEXT_COMMAND_THEFEED_POST("CELL_255");
    HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_8278[1 /*6*/]));
    HUD::END_TEXT_COMMAND_THEFEED_POST_MESSAGETEXT(&cVar0, &cVar0, false, 3, "", 0);
  }
  MISC::CLEAR_BIT(&Global_7668, 0);
}