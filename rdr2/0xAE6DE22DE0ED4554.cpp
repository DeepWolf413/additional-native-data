// dominoes_sp.ysc @ L17870
void func_514(var uParam0, int iParam1)
{
  if (!func_557(uParam0))
  {
    return;
  }
  if (!func_204(uParam0, iParam1))
  {
    return;
  }
  if (uParam0->f_199[iParam1 /*124*/].f_7)
  {
    ANIMSCENE::_0xAE6DE22DE0ED4554(uParam0->f_742, func_153(&(uParam0->f_199[iParam1 /*124*/])));
    uParam0->f_199[iParam1 /*124*/].f_7 = 0;
  }
}