// am_armwrestling.ysc @ L43413
void func_243(var uParam0, var uParam1, char* sParam2, char* sParam3, int iParam4, int iParam5)
{
  char* sVar0;
  
  if (!func_114(sParam2))
  {
    if (func_247())
    {
      func_246(uParam1, 0);
      HUD::SET_TEXT_JUSTIFICATION(iParam5);
      if (func_114(sParam3))
      {
        sVar0 = "STRING";
      }
      else
      {
        sVar0 = sParam3;
      }
      HUD::BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sVar0);
      HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(iParam4);
      HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(sParam2);
      HUD::END_TEXT_COMMAND_DISPLAY_TEXT(func_245(*uParam0), func_244(uParam0->f_1), 0);
    }
  }
}