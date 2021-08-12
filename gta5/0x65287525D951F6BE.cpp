// golf.ysc @ L107483
int func_805(struct<3> Param0, int iParam3, int iParam4, int iParam5)
{
  int iVar0;
  var uVar1;
  var uVar4;
  int iVar7;
  var uVar8;
  int iVar9;
  
  iVar9 = SHAPETEST::START_SHAPE_TEST_CAPSULE(Param0 + Vector(0.25f, 0f, 0f), Param0 - Vector(0.25f, 0f, 0f), 0.05f, 1, iParam5, 4);
  if (SHAPETEST::GET_SHAPE_TEST_RESULT_INCLUDING_MATERIAL(iVar9, &iVar0, &uVar1, &uVar4, &iVar7, &uVar8) != 2)
  {
  }
  if (iVar0 != 0)
  {
    *iParam3 = func_804(iVar7);
    if (*iParam3 == 3)
    {
      if (func_719(Param0))
      {
        *iParam3 = 2;
      }
    }
    if (func_717(Param0))
    {
      *iParam3 = 9;
    }
    return 1;
  }
  *iParam3 = iParam4;
  return 0;
}