// appmpjoblistnew.ysc @ L311165
void func_4874()
{
  int iVar0;
  struct<4> Var1;
  char cVar5[64];
  
  func_25(Global_19779, "SET_DATA_SLOT_EMPTY", SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432, -1082130432);
  GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(Global_19779, "SET_DATA_SLOT");
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(7);
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_INT(0);
  iVar0 = 12;
  Var1 = { func_466(iVar0) };
  GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING("STRING");
  HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&Var1);
  GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
  GRAPHICS::BEGIN_TEXT_COMMAND_SCALEFORM_STRING(&cLocal_282);
  HUD::ADD_TEXT_COMPONENT_INTEGER(func_503(20));
  GRAPHICS::END_TEXT_COMMAND_SCALEFORM_STRING();
  StringCopy(&cVar5, HUD::_GET_LABEL_TEXT(func_457(iVar0)), 64);
  GRAPHICS::SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING(&cVar5);
  GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
  func_25(Global_19779, "DISPLAY_VIEW", SYSTEM::TO_FLOAT(7), -1082130432, -1082130432, -1082130432, -1082130432);
  func_452(13, &Local_242, 1, "", 14, &Local_246, &iLocal_307);
  func_455(&Local_270);
}