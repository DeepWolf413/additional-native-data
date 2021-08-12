// blackwater.ysc @ L14804
bool func_501(int iParam0, int iParam1)
{
  int iVar0;

  if (Global_1934266.f_26 != iParam0)
  {
    Global_1934266.f_26 = iParam0;
    iVar0 = iParam1;
    if (!func_275(iParam1))
    {
      iVar0 = func_556(iParam0);
    }
    if (!func_275(iVar0))
    {
      iVar0 = func_276(func_500(Global_36));
    }
    if (!func_275(iVar0))
    {
      return false;
    }
    LAW::_SET_LAW_REGION(PLAYER::PLAYER_ID(), Global_1934266.f_26, func_557(iVar0));
    return true;
  }
  return false;
}