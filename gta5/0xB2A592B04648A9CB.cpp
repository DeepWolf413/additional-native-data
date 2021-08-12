// director_mode.ysc @ L124706
void func_849(bool bParam0, char* sParam1)
{
  sParam1 = sParam1;
  if (bParam0)
  {
    if (CAM::IS_SCREEN_FADED_OUT())
    {
      if (!HUD::BUSYSPINNER_IS_DISPLAYING() && !iLocal_13694)
      {
        HUD::BEGIN_TEXT_COMMAND_BUSYSPINNER_ON("");
        HUD::END_TEXT_COMMAND_BUSYSPINNER_ON(2);
        iLocal_13694 = 1;
      }
    }
  }
  else if (iLocal_13694)
  {
    if (CAM::IS_SCREEN_FADED_IN() || CAM::IS_SCREEN_FADING_IN())
    {
      HUD::BUSYSPINNER_OFF();
      iLocal_13694 = 0;
    }
  }
}