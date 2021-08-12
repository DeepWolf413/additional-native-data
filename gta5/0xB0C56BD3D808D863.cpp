// maintransition.ysc @ L98930
void func_542()
{
  var uVar0;
  
  if (func_394(1) && func_391())
  {
    if (func_29(201))
    {
      func_4269(1, 1);
      func_413(joaat("mpply_rspolicyshown"), 1);
      func_4332(32);
      func_4340(4);
      Global_2465848 = 0;
    }
    else if (func_29(202))
    {
      func_4269(1, 1);
      Global_2465774 = uVar0;
      func_493();
      Global_2465848 = 1;
      LOADINGSCREEN::_LOADINGSCREEN_SET_LOAD_FREEMODE(false);
      func_34(63, -1, 32);
    }
  }
  if (HUD::IS_WARNING_MESSAGE_ACTIVE())
  {
    if (CAM::IS_SCREEN_FADED_OUT())
    {
      CAM::DO_SCREEN_FADE_IN(0);
    }
    SCRIPT::SHUTDOWN_LOADING_SCREEN();
  }
}