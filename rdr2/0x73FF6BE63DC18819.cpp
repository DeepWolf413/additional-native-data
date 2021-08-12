// rcm_abigail31.ysc @ L60121
void func_1904()
{
  float fVar0;
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar0 = CAM::_0x73FF6BE63DC18819();
  bVar1 = fVar0 > 0.289999f;
  fVar2 = 0.1f;
  fVar3 = 0f;
  fVar4 = 1f;
  if (!bVar1)
  {
    fVar5 = (1f - (2f * fVar0));
    fVar2 = (fVar2 * fVar5);
    fVar3 = (fVar3 + fVar0);
    fVar4 = ((fVar4 - fVar2) - fVar0);
  }
  else
  {
    fVar3 = (fVar3 - fVar2);
    fVar4 = (fVar4 - fVar2);
    fVar2 = (fVar2 * 2f);
  }
  func_2188(fVar3, 0f, fVar2, 1f, 0, 0, 0, 255, 1);
  func_2188(fVar4, 0f, fVar2, 1f, 0, 0, 0, 255, 1);
  CAM::_0xE296208C273BD7F0(0, 0, 0, 17, 1, 1);
}