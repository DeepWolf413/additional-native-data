// am_mp_arena_garage.ysc @ L309136
void func_4886(int iParam0, var uParam1)
{
  char* sVar0;
  
  *uParam1 = iParam0;
  func_4887(iParam0, &sVar0);
  GRAPHICS::BEGIN_SCALEFORM_MOVIE_METHOD(uParam1->f_3, "SET_TEXTURES");
  GRAPHICS::_SCALEFORM_MOVIE_METHOD_ADD_PARAM_TEXTURE_NAME_STRING_2(&sVar0);
  func_4604("ACW_NOTE_1");
  func_4604("ACW_NOTE_2");
  func_4604("ACW_NOTE_3");
  GRAPHICS::END_SCALEFORM_MOVIE_METHOD();
}