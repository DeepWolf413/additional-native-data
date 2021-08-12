// abigail2_1.ysc @ L14053
bool func_10(int iParam0)
{
  if (iParam0 < 0)
  {
    return false;
  }
  if (iParam0 > 48)
  {
    return false;
  }
  if (Global_1945938[iParam0 /*18*/].f_1 & 2 == 0)
  {
    return false;
  }
  return HUD::_UIPROMPT_IS_VALID(Global_1945938[iParam0 /*18*/].f_3);
}