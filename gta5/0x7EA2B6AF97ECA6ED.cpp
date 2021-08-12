// am_armwrestling.ysc @ L43482
int func_247()
{
  if (func_248())
  {
    return 1;
  }
  if (CAM::IS_SCREEN_FADED_OUT())
  {
    return 0;
  }
  if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADING_IN())
  {
    return 0;
  }
  if (MISC::IS_FRONTEND_FADING())
  {
    return 0;
  }
  return 1;
}