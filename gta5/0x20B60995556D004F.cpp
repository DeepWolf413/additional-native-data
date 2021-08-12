// agency_heist3a.ysc @ L139232
int func_1122(int iParam0, struct<3> Param1, int iParam4, struct<3> Param5, float fParam8)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
    {
      if (ENTITY::IS_ENTITY_AT_COORD(iParam0, Param1, 10f, 10f, 10f, false, true, 0))
      {
        if (VEHICLE::GET_VEHICLE_MAX_NUMBER_OF_PASSENGERS(iParam0) >= iParam4)
        {
          return 1;
        }
        else
        {
          MISC::CLEAR_AREA(Param5, 10f, true, false, false, false);
          ENTITY::SET_ENTITY_COORDS(iParam0, Param5, true, false, false, true);
          ENTITY::SET_ENTITY_HEADING(iParam0, fParam8);
          VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(iParam0, 5f);
          func_761(Param5, fParam8);
        }
      }
    }
  }
  return 0;
}