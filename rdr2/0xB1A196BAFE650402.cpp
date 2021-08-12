// dominoes_sp.ysc @ L10411
int func_285(var uParam0, int iParam1)
{
  int iVar0;

  iVar0 = func_153(&(uParam0->f_199[iParam1 /*124*/]));
  if (!func_557(uParam0))
  {
    return 0;
  }
  if (func_32() != -1)
  {
    return 0;
  }
  if (!func_204(uParam0, iParam1))
  {
    return 0;
  }
  if (uParam0->f_199[iParam1 /*124*/].f_7)
  {
    return 0;
  }
  ANIMSCENE::_0xB1A196BAFE650402(uParam0->f_742, iVar0);
  if (func_138(iVar0) || PED::IS_PED_A_PLAYER(iVar0))
  {
    ANIMSCENE::_0x3641FCD53E59B335(uParam0->f_742, iVar0, "");
  }
  uParam0->f_199[iParam1 /*124*/].f_7 = 1;
  return 1;
}