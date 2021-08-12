// fm_mission_controller_2020.ysc @ L443626
bool func_7432(bool bParam0, int iParam1, var uParam2)
{
  if (func_7393(uParam2->f_3) == 3 || (!VEHICLE::IS_VEHICLE_DRIVEABLE(uParam2->f_14, false) || !VEHICLE::ARE_ANY_VEHICLE_SEATS_FREE(uParam2->f_14)))
  {
    return func_7443(bParam0, iParam1, uParam2);
  }
  return func_7433(bParam0, iParam1, uParam2);
}