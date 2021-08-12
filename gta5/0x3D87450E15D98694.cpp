// am_mp_casino_nightclub.ysc @ L376384
int func_5434(var uParam0, int iParam1)
{
  int iVar0;
  var uVar1;
  var uVar2;
  var uVar5;
  int iVar8;
  
  iVar8 = SHAPETEST::GET_SHAPE_TEST_RESULT(uParam0->f_659, &iVar0, &uVar2, &uVar5, &uVar1);
  if (iVar8 == 2)
  {
    *iParam1 = iVar0 != 0;
    uParam0->f_659 = 0;
    return iVar8;
  }
  return iVar8;
}