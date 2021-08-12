// act_camp_dominoes_light.ysc @ L470
bool func_10(vector3 vParam0, float fParam3, int iParam4, int iParam5)
{
  var uVar0;
  int iVar5[4];

  if (func_64(vParam0))
  {
    return false;
  }
  uVar0 = 4;
  iVar5[0] = 16384;
  iVar5[1] = iParam4;
  return VOLUME::_0x51E52C9687FCDEEC(vParam0, fParam3, &uVar0, &iVar5, iParam5);
}