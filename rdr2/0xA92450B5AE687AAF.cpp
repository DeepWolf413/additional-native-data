// campfire_gang.ysc @ L28942
bool func_631(var uParam0)
{
  int iVar0;
  int iVar1[2];
  int iVar4[2];

  iVar0 = 262769;
  if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_200[0]))
  {
    iVar4[0] = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_200[0]);
    STREAMING::_REQUEST_SCENARIO_TYPE(iVar4[0], iVar0, ENTITY::GET_ENTITY_MODEL(uParam0->f_40[0]), 0);
    iVar1[0] = 1;
  }
  if (TASK::_DOES_SCENARIO_POINT_EXIST(uParam0->f_200[1]))
  {
    iVar4[1] = TASK::_GET_SCENARIO_POINT_TYPE(uParam0->f_200[1]);
    STREAMING::_REQUEST_SCENARIO_TYPE(iVar4[1], iVar0, ENTITY::GET_ENTITY_MODEL(uParam0->f_40[1]), 0);
    iVar1[1] = 1;
  }
  if (iVar1[0] && !STREAMING::_HAS_SCENARIO_TYPE_LOADED(iVar4[0], false))
  {
    return false;
  }
  if (iVar1[1] && !STREAMING::_HAS_SCENARIO_TYPE_LOADED(iVar4[1], false))
  {
    return false;
  }
  return true;
}