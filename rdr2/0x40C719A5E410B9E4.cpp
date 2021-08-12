// abigail2_1.ysc @ L65870
void func_1811(var uParam0)
{
  if (CAM::IS_SCREEN_FADING_OUT() || CAM::IS_SCREEN_FADED_OUT())
  {
    return;
  }
  if (func_1377(uParam0, 512))
  {
    return;
  }
  if (func_1666(&(uParam0->f_2262)) < 2f)
  {
    return;
  }
  if (func_2158(1, 0))
  {
    CAM::DO_SCREEN_FADE_OUT(1000);
    func_743(uParam0, 524288);
  }
}