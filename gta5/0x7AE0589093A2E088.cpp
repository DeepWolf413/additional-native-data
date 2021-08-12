// fm_race_creator.ysc @ L458023
int func_7619(char* sParam0, char* sParam1, bool bParam2, int iParam3, int iParam4, int iParam5)
{
  int iVar0;
  struct<8> Var1;
  int iVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  int iVar21;
  
  iVar0 = -1;
  StringCopy(&Var1, PLAYER::GET_PLAYER_NAME(bParam2), 64);
  if (MISC::IS_STRING_NULL_OR_EMPTY(&Var1))
  {
  }
  HUD::GET_HUD_COLOUR(iParam5, &iVar17, &iVar18, &iVar19, &iVar20);
  HUD::_THEFEED_SET_ANIMPOSTFX_COLOR(iVar17, iVar18, iVar19, iVar20);
  HUD::_THEFEED_SET_ANIMPOSTFX_COUNT(1);
  iVar21 = 1;
  HUD::BEGIN_TEXT_COMMAND_THEFEED_POST(sParam0);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
  {
    HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(1);
    HUD::ADD_TEXT_COMPONENT_SUBSTRING_KEYBOARD_DISPLAY(sParam1);
  }
  HUD::END_TEXT_COMMAND_THEFEED_POST_UNLOCK_TU_WITH_COLOR(&Var1, iParam4, "", iVar21, iParam3, 1);
  HUD::THEFEED_RESET_ALL_PARAMETERS();
  func_1096(35, sParam0, 1, sParam1, iParam4, 0, 0, 0f, 0, &Var1, 0, 0);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
  {
  }
  return iVar0;
}