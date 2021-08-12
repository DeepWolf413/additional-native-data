// exile3.ysc @ L48405
void func_388(int iParam0, int iParam1, float fParam2)
{
  int iVar0;
  
  iVar0 = func_280();
  if (!PED::IS_PED_INJURED(iVar0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_865[1], false))
  {
    if (func_303() != 0 || iParam1)
    {
      TASK::TASK_VEHICLE_FOLLOW_WAYPOINT_RECORDING(iVar0, iLocal_865[1], "exile31", 262144, iParam0, 0, -1, fParam2, false, 2f);
      VEHICLE::SET_BOAT_DISABLE_AVOIDANCE(iLocal_865[1], true);
    }
  }
}