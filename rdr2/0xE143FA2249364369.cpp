// act_hunting_2.ysc @ L34611
int func_953(int iParam0, vector3 vParam1, int iParam4, int iParam5)
{
  int iVar0;
  int iVar1;

  STREAMING::REQUEST_MODEL(iParam0, false);
  if (!STREAMING::HAS_MODEL_LOADED(iParam0))
  {
    return 0;
  }
  if (!TASK::_DOES_SCENARIO_POINT_EXIST(iParam4) && iParam5 != 0)
  {
    iParam4 = TASK::_FIND_CLOSEST_ACTIVE_SCENARIO_POINT_OF_TYPE(vParam1, iParam5, 1f, 0, false);
  }
  if (TASK::_DOES_SCENARIO_POINT_EXIST(iParam4))
  {
    if (TASK::_0xEA31F199A73801D3(iParam4))
    {
      iVar1 = TASK::_GET_SCENARIO_POINT_ENTITY(iParam4, "CONTAINER");
      if (ENTITY::IS_ENTITY_AN_OBJECT(iVar1))
      {
        iVar0 = ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar1);
      }
    }
  }
  else
  {
    iVar0 = OBJECT::GET_CLOSEST_OBJECT_OF_TYPE(vParam1, 0.5f, iParam0, false, false, true);
  }
  return iVar0;
}