// abigail2.ysc @ L36074
bool func_271(char* sParam0, int iParam1, char* sParam2)
{
  HUD::BEGIN_TEXT_COMMAND_IS_MESSAGE_DISPLAYED(sParam0);
  if (iParam1 == 1)
  {
    HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(sParam2);
  }
  return HUD::END_TEXT_COMMAND_IS_MESSAGE_DISPLAYED();
}