// act_caunc_rustling_invite.ysc @ L25553
int func_855(int iParam0)
{
  int iVar0;

  if (func_954(iParam0))
  {
    return 0;
  }
  if (!func_6(Global_35, 0))
  {
    return 0;
  }
  iVar0 = -1;
  if (!func_952(iParam0, &iVar0))
  {
    return 0;
  }
  if (func_854(iParam0))
  {
  }
  if (PED::_0x1E017404784AA6A3(Global_35, iParam0))
  {
    func_955(iParam0, 1);
    return 1;
  }
  return 0;
}