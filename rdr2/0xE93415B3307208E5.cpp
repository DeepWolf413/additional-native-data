// fishing_core.ysc @ L15390
void func_585(var uParam0, int iParam1, float fParam2)
{
  int iVar0;

  iVar0 = func_702(iParam1);
  if (func_703(iVar0) && !FLOCK::_0x19870C40C7EE15BE(iVar0, uParam0->f_31[iParam1]))
  {
    uParam0->f_31[iParam1] = FLOCK::_0xE93415B3307208E5(iVar0, uParam0->f_12, 0f, fParam2, 10000f, 0f, 0f, 0f, 1);
  }
}