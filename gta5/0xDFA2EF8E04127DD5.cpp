// agency_heist3b.ysc @ L118083
void func_813(bool bParam0)
{
  if (bParam0)
  {
    GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_0", false);
    GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_1", false);
    GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_2", false);
    GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_3", false);
    GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_4", false);
    GRAPHICS::REQUEST_STREAMED_TEXTURE_DICT("HACKING_PC_desktop_5", false);
  }
  iLocal_71 = GRAPHICS::_REQUEST_SCALEFORM_MOVIE_INTERACTIVE("Hacking_PC");
}