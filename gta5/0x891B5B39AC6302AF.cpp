// abigail2.ysc @ L46350
void func_458(bool bParam0, bool bParam1)
{
  if (bParam0)
  {
    func_459(0, 1, 1);
  }
  if (!CAM::IS_SCREEN_FADED_OUT())
  {
    CAM::DO_SCREEN_FADE_OUT(0);
  }
  func_341(0f, 0f, 0f, 0, 0, 0, 1, 1, 1, bParam1, 1, 1, 1);
}