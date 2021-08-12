// annesburg.ysc @ L6193
void func_181(int iParam0, int iParam1)
{
  if (iParam0 < 0 || iParam0 >= Global_40.f_9829)
  {
    return;
  }
  func_289(&(Global_40.f_9829[iParam0 /*4*/].f_2), iParam1);
}

Vector3 func_182(int iParam0)
{
  if (!func_140(iParam0))
  {
    return 0f, 0f, 0f;
  }
  if (!PERSCHAR::_0x800DF3FC913355F3(func_169(iParam0)))
  {
    return 0f, 0f, 0f;
  }
  return PERSCHAR::_0x5EE6FCCC9C832CA2(func_169(iParam0));
}