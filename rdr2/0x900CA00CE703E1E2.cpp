// act_bankrobbery01.ysc @ L61573
bool func_1987(var uParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
{
  float fVar0;

  if (bParam3)
  {
    return false;
  }
  if (bParam4)
  {
    if (func_1975(iParam1))
    {
      return false;
    }
  }
  fVar0 = 5f;
  if (*uParam0 & 65536 != 0)
  {
    fVar0 = PED::_0x900CA00CE703E1E2(iParam1);
  }
  if (fParam2 < fVar0)
  {
    return true;
  }
  return false;
}