// agency_heist2.ysc @ L18856
int func_294(struct<3> Param0, float fParam3)
{
  if (!ENTITY::DOES_ENTITY_EXIST(iLocal_87))
  {
    STREAMING::REQUEST_MODEL(joaat("zion2"));
    if (STREAMING::HAS_MODEL_LOADED(joaat("zion2")))
    {
      iLocal_87 = VEHICLE::CREATE_VEHICLE(joaat("zion2"), Param0, fParam3, true, true, false);
      VEHICLE::SET_VEHICLE_COLOURS(iLocal_87, 33, 0);
      VEHICLE::SET_VEHICLE_EXTRA_COLOURS(iLocal_87, 69, 0);
      VEHICLE::SET_DISABLE_PRETEND_OCCUPANTS(iLocal_87, false);
    }
  }
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_87) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_87, false))
  {
    ENTITY::SET_ENTITY_COORDS(iLocal_87, Param0, true, false, false, true);
    ENTITY::SET_ENTITY_HEADING(iLocal_87, fParam3);
    VEHICLE::SET_VEHICLE_ALARM(iLocal_87, true);
    return 1;
  }
  return 0;
}