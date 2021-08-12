// act_caunc_rustling.ysc @ L31754
int func_782(int iParam0, int iParam1)
{
  if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
  {
    if (!CAM::IS_SCREEN_FADING_IN())
    {
      CAM::DO_SCREEN_FADE_IN(iParam0);
    }
  }
  if (iParam1 == 0 || CAM::IS_SCREEN_FADED_IN())
  {
    return 1;
  }
  return 0;
}