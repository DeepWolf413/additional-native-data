// act_caunc_rustling.ysc @ L57691
void func_1566(int iParam0, char* sParam1, char* sParam2, bool bParam3)
{
  int iVar0;

  if (bParam3 && !func_77(iParam0))
  {
    return;
  }
  iVar0 = func_373(iParam0);
  if (!HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar0 /*18*/].f_3))
  {
    return;
  }
  HUD::_UIPROMPT_SET_TEXT(Global_1945938[iVar0 /*18*/].f_3, MISC::_CREATE_VAR_STRING(2, sParam1, sParam2));
}