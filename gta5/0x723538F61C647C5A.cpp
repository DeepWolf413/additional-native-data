// maintransition.ysc @ L139586
void func_1464(var uParam0)
{
  float fVar0;
  float fVar1;
  int iVar2;
  
  iVar2 = uParam0->f_467;
  fVar0 = func_1320(uParam0, iVar2);
  fVar1 = func_1318(uParam0, iVar2);
  if (func_1278(&(uParam0->f_42[iVar2])))
  {
    PED::UPDATE_PED_HEAD_BLEND_DATA(uParam0->f_42[iVar2], fVar0, fVar1, 0f);
  }
  if (iVar2 == 0)
  {
    iVar2 = 1;
  }
  else
  {
    iVar2 = 0;
  }
  fVar0 = func_1320(uParam0, iVar2);
  fVar1 = func_1318(uParam0, iVar2);
  if (func_1278(&(uParam0->f_42[iVar2])))
  {
    PED::UPDATE_PED_HEAD_BLEND_DATA(uParam0->f_42[iVar2], fVar0, fVar1, 0f);
  }
}