// coachrobberies.ysc @ L43066
bool func_1290(int iParam0, vector3 vParam1, float fParam4)
{
  int iVar0;

  if (VEHICLE::IS_ANY_VEHICLE_NEAR_POINT(vParam1, fParam4))
  {
    iVar0 = VEHICLE::GET_CLOSEST_VEHICLE(vParam1, fParam4, 0, 0);
    if (ENTITY::DOES_ENTITY_EXIST(iVar0))
    {
      if ((((VEHICLE::_GET_CURRENT_VEHICLE_DRIVER(iVar0) == 0 && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1) == 0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, 0) == 0) && iVar0 != iParam0) && (!ENTITY::DOES_ENTITY_EXIST(Local_51.f_2278) || iVar0 != Local_51.f_2278))
      {
        return true;
      }
    }
  }
  return false;
}