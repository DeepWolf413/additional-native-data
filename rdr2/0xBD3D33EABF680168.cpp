// beat_bandito_execution.ysc @ L3417
bool func_116()
{
  bool bVar0;
  int iVar1;

  iVar1 = INTERIOR::GET_INTERIOR_AT_COORDS(vLocal_552);
  if (bVar0 == 0)
  {
    if (INTERIOR::IS_VALID_INTERIOR(iVar1))
    {
      INTERIOR::PIN_INTERIOR_IN_MEMORY(iVar1);
      if (INTERIOR::IS_INTERIOR_READY(iVar1))
      {
        bVar0 = true;
      }
      else
      {
        return false;
      }
    }
  }
  if (bVar0)
  {
    iLocal_591 = TASK::CREATE_SCENARIO_POINT(joaat("WORLD_HUMAN_SMOKE"), func_291(6), 27.9f, 0, 0, 1);
    TASK::_SET_SCENARIO_POINT_FLAG(iLocal_591, 23, true);
    TASK::_SET_SCENARIO_POINT_FLAG(iLocal_591, 25, true);
    return true;
  }
  return false;
}