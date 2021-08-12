// mob4.ysc @ L80400
bool func_2366(int iParam0)
{
  int iVar0;
  vector3 vVar1;
  var uVar4;
  var uVar7;
  int iVar10;
  int iVar11;

  iVar11 = SHAPETEST::GET_SHAPE_TEST_RESULT(iLocal_1022, &iVar0, &uVar4, &uVar7, &iVar10);
  if (iVar11 == 0)
  {
    if (func_2689(iParam0, &vVar1))
    {
      vLocal_939 = { func_2362(func_1832(ENTITY::GET_ENTITY_COORDS(Local_694, true, false), 0, 0, 1036831949 /* Float: 0.1f */), 1.5f, 0.1f) };
      iLocal_1022 = SHAPETEST::START_SHAPE_TEST_LOS_PROBE(vVar1, vLocal_939, 3167, 0, 7);
    }
  }
  else if (iVar11 == 2)
  {
    if (iVar0 == 0)
    {
      return true;
    }
    else if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar10) == Local_694)
    {
      return true;
    }
  }
  return false;
}