// loanshark_catfish.ysc @ L2260
void func_61(char[4] cParam0)
{
  int iVar0;

  func_58(cParam0);
  func_224(&(cParam0->f_2277), 0, 0, 1, 0);
  func_122(cParam0);
  func_34(&(cParam0->f_16), 1);
  func_225(cParam0);
  func_11(cParam0, func_226(cParam0));
  iVar0 = func_226(cParam0);
  if (iVar0 == 7)
  {
    func_12(cParam0);
    if (cParam0->f_1 != 7)
    {
      iVar0 = 6;
    }
  }
  else if (iVar0 == 8)
  {
    SCRIPTS::SHUTDOWN_LOADING_SCREEN();
    if (!CAM::IS_SCREEN_FADED_IN())
    {
      CAM::DO_SCREEN_FADE_IN(0);
    }
  }
}