// aberdeenpigfarm.ysc @ L4041
int func_162(int iParam0, bool bParam1)
{
  if (!func_92(iParam0))
  {
    return 0;
  }
  if (!func_161(iParam0, 2))
  {
    return 0;
  }
  if (func_163(iParam0) == 0)
  {
    return 1;
  }
  if (!PERSCHAR::_0x800DF3FC913355F3(func_165(iParam0)))
  {
    return 1;
  }
  if (func_161(iParam0, 1) && !bParam1)
  {
    func_176(iParam0, 128);
    return 1;
  }
  func_166(iParam0, 129);
  func_217(iParam0);
  PERSCHAR::_0xFC77C5B44D5FF7C0(func_165(iParam0));
  func_164(iParam0, 0);
  return 1;
}