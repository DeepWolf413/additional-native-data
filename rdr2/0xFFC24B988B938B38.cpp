// bjack_sp.ysc @ L14595
void func_485(var uParam0, int iParam1)
{
  int iVar0;
  int iVar1;

  if (uParam0->f_1239.f_4 >= 2)
  {
  }
  else
  {
    iVar0 = func_955(iParam1);
    iVar1 = func_956(uParam0);
    PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(uParam0->f_1239, func_957(iParam1), func_246(uParam0, iVar0, iVar1));
    uParam0->f_1239.f_5 = iParam1;
  }
}