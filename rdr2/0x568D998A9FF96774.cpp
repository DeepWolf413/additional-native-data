// marston1.ysc @ L60965
void func_1586(char[4] cParam0)
{
  int iVar0;

  iVar0 = func_33(cParam0);
  if (iVar0 <= iLocal_150)
  {
    if (func_2094(16, 0, 0, 1))
    {
      CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
      return;
    }
  }
  else if (iVar0 <= iLocal_155)
  {
    if (func_2094(17, 30, 0, 1))
    {
      CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
      return;
    }
  }
  else if (iVar0 <= iLocal_158)
  {
    if (func_2094(19, 0, 0, 1))
    {
      CLOCK::_PAUSE_CLOCK_THIS_FRAME(true);
      return;
    }
  }
}