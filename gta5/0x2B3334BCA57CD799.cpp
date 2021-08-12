// fm_content_tuner_robbery.ysc @ L192778
int func_4284(var uParam0)
{
  int iVar0;
  var uVar1;
  var uVar4;
  int iVar7;
  
  switch (SHAPETEST::GET_SHAPE_TEST_RESULT(*uParam0, &iVar0, &uVar1, &uVar4, &iVar7))
  {
    case 0:
      return 0;
      break;
    
    case 1:
      break;
    
    case 2:
      if (iVar0 != 0)
      {
        SHAPETEST::RELEASE_SCRIPT_GUID_FROM_ENTITY(iVar7);
        return 2;
      }
      else
      {
        return 3;
      }
      break;
  }
  return 1;
}