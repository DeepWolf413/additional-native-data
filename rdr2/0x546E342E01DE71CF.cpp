// act_camp_dominoes_light.ysc @ L894
bool func_24(int iParam0, bool bParam1)
{
  int iVar0;

  if (bParam1 && !func_4(iParam0))
  {
    return false;
  }
  iVar0 = func_56(iParam0);
  return HUD::_UIPROMPT_IS_ACTIVE(Global_1945938[iVar0 /*18*/].f_3);
}