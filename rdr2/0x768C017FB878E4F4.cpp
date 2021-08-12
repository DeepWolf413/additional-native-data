// startup.ysc @ L747
void func_30()
{
  func_36();
  func_17(4);
  PAD::_0xA0CEFCEA390AAB9B(0);
  if (func_34() == 3)
  {
    if (SCRIPTS::_DOES_THREAD_EXIST(Global_1572887.f_14))
    {
      func_63(2048);
    }
  }
  else
  {
    PLAYER::FORCE_CLEANUP(2);
    func_63(64);
  }
}