// beat_hunter.ysc @ L11137
bool func_338(int iParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
  int iVar0;

  if (!TASK::GET_IS_WAYPOINT_RECORDING_LOADED(sParam1))
  {
    return false;
  }
  if (!TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar0))
  {
    return false;
  }
  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return false;
  }
  if (ENTITY::IS_ENTITY_DEAD(iParam0))
  {
  }
  if (iVar0 > 256)
  {
    return false;
  }
  if (ENTITY::_0x29BA9F78321E5A6C(iParam0, sParam1, iParam2, iParam3, iParam4, iParam5, 0, 0, 0, iParam6, 0, iParam7))
  {
    return true;
  }
  return false;
}