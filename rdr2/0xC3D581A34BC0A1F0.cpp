// fishing_core.ysc @ L10557
void func_416(var uParam0, int iParam1, int iParam2)
{
  int iVar0;

  iVar0 = func_702(iParam2);
  if (func_703(iVar0) && FLOCK::_0x19870C40C7EE15BE(iVar0, (uParam0[iParam1 /*263*/])->f_102[iParam2]))
  {
    FLOCK::_0xC3D581A34BC0A1F0(iVar0, (uParam0[iParam1 /*263*/])->f_102[iParam2]);
    if (iParam1 == 0)
    {
      func_704(uParam0, iParam2, 0f);
    }
  }
}