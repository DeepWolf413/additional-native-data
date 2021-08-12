// marston5x_outro.ysc @ L391
int func_21(var uParam0)
{
  func_43(&Global_1935630, 1048576);
  if (CAM::IS_SCREEN_FADED_OUT())
  {
    CAM::DO_SCREEN_FADE_IN(1000);
  }
  if (!func_44(62))
  {
    CLOCK::ADVANCE_CLOCK_TIME_TO(8, 0, 0);
  }
  return 1;
}