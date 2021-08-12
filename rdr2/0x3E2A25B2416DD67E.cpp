// abigail2_1_intro.ysc @ L7074
int func_342(int iParam0, char[4] cParam1, float fParam2, int iParam3, bool bParam4, int iParam5, bool bParam6)
{
  vector3 vVar0;
  vector3 vVar3;
  int iVar6;

  if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
  {
    return 0;
  }
  vVar0 = { VOLUME::_GET_VOLUME_COORDS(iParam0) };
  vVar3 = { VOLUME::_GET_VOLUME_SCALE(iParam0) };
  iVar6 = func_495(vVar0, vVar3.x, cParam1, fParam2, iParam3, bParam4, iParam5, bParam6);
  return iVar6;
}