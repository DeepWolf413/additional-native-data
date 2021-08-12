// timershud.ysc @ L2781
void func_47(var uParam0, var uParam1, char* sParam2, int iParam3, int iParam4)
{
  char* sVar0;
  
  sVar0 = sParam2;
  if (!func_54(sVar0))
  {
    if (func_50())
    {
      func_80(uParam1, 0);
      HUD::SET_TEXT_JUSTIFICATION(iParam4);
      HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
      HUD::ADD_TEXT_COMPONENT_INTEGER(iParam3);
      HUD::ADD_TEXT_COMPONENT_FORMATTED_INTEGER(iParam3, true);
      HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_49(*uParam0), func_48(uParam0->f_1), 0);
    }
  }
}