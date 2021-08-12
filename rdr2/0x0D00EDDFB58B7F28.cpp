// sadie5_outro.ysc @ L2519
bool func_103(int iParam0)
{
  int iVar0;

  if (!func_100(iParam0))
  {
    return false;
  }
  iVar0 = func_151(iParam0);
  return !HUD::_UIPROMPT_IS_ENABLED(Global_1945938[iVar0 /*18*/].f_3);
}