// long_update.ysc @ L24107
void func_706()
{
  float fVar0;
  float fVar1;
  float fVar2;
  float fVar3;

  fVar0 = (IntToFloat(ATTRIBUTE::GET_ATTRIBUTE_RANK(Global_35, 16)) / 100f);
  fVar1 = 0.5f;
  fVar2 = 1.5f;
  fVar3 = (((1f - fVar0) * fVar2) + (fVar1 * fVar0));
  PED::_0xFD8E853F0BC2E942(Global_35, fVar3);
}