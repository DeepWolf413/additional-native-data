// mudtown5.ysc @ L116853
void func_3190(var uParam0)
{
  int iVar0;
  float fVar1;
  int iVar2;

  iVar0 = func_3224(uParam0);
  fVar1 = 0f;
  if (iVar0 == 1)
  {
    iVar2 = func_165(uParam0->f_120);
    if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar2 /*18*/].f_3))
    {
      HUD::_UIPROMPT_SET_SPINNER_SPEED(Global_1945938[iVar2 /*18*/].f_3, fVar1);
    }
  }
  else
  {
    if (uParam0->f_80 == 0)
    {
      fVar1 = (IntToFloat(iVar0) * 0.01f);
    }
    else if (uParam0->f_80 == 1)
    {
      fVar1 = (IntToFloat(-iVar0) * 0.01f);
    }
    iVar2 = func_165(uParam0->f_120);
    if (HUD::_UIPROMPT_IS_VALID(Global_1945938[iVar2 /*18*/].f_3))
    {
      HUD::_UIPROMPT_SET_SPINNER_SPEED(Global_1945938[iVar2 /*18*/].f_3, fVar1);
    }
  }
}