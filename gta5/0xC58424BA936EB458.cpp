// am_armwrestling.ysc @ L119791
void func_998(var uParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;
  
  HUD::GET_HUD_COLOUR(12, &iVar0, &iVar1, &iVar2, &uVar3);
  GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(*uParam0, "SET_MESSAGE");
  HUD::SET_COLOUR_OF_NEXT_TEXT_COMPONENT(-1);
  GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("NUMBER");
  HUD::ADD_TEXT_COMPONENT_INTEGER(MISC::ABSI(iParam1));
  GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar0);
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar1);
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(iVar2);
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_BOOL(true);
  GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}