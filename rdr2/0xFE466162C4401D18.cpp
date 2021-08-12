// rcm_bh_blackwater_hunt.ysc @ L15279
bool func_485()
{
  int iVar0;
  vector3 vVar1[2];
  var uVar8;

  iLocal_526 = SHAPETEST::START_SHAPE_TEST_BOX(-825.4315f, -1278.989f, 44.021f, 5f, 6f, 5f, 0f, 0f, 0f, 2, 2, 0, 4);
  if (SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_526, &iVar0, &(vVar1[0 /*3*/]), &(vVar1[1 /*3*/]), &uVar8) == 2)
  {
    if (iVar0 == 0)
    {
    }
    else
    {
      return true;
    }
  }
  return false;
}