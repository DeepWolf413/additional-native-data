// maintransition.ysc @ L131613
void func_1309(var uParam0, int iParam1)
{
  float fVar0;
  float fVar1;
  int iVar2;
  int iVar3;
  
  fVar0 = func_1320(uParam0, iParam1);
  fVar1 = func_1318(uParam0, iParam1);
  iVar2 = func_1314(uParam0, 3);
  iVar3 = func_1314(uParam0, 4);
  if (func_1278(&(uParam0->f_42[iParam1])))
  {
    PED::SET_PED_HEAD_BLEND_DATA(uParam0->f_42[iParam1], iVar2, iVar3, 0, iVar2, iVar3, 0, fVar0, fVar1, 0f, true);
  }
  func_1313(uParam0);
  func_1310(uParam0);
}