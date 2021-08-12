// abigail2_1.ysc @ L52407
int func_1363(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
  int iVar0;

  iVar0 = PED::CREATE_PED(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
  if (bParam5)
  {
    PED::_SET_RANDOM_OUTFIT_VARIATION(iVar0, true);
  }
  return iVar0;
}