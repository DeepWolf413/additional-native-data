// coachrobberies.ysc @ L19256
void func_559(int iParam0, vector3 vParam1, bool bParam4)
{
  int iVar0;

  if (bParam4 && !func_240(iParam0))
  {
    return;
  }
  iVar0 = func_241(iParam0);
  if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
  {
    return;
  }
  HUD::_UIPROMPT_CONTEXT_SET_POINT(Global_1945938[iVar0 /*18*/].f_3, vParam1);
  Global_1945938[iVar0 /*18*/].f_12 = { vParam1 };
}