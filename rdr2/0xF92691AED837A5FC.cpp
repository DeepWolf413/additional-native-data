// beat_locked_safe.ysc @ L4358
bool func_141()
{
  if (Local_118.f_46)
  {
    return false;
  }
  if (ENTITY::IS_ENTITY_DEAD(iLocal_465))
  {
    return false;
  }
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_465, false, false))
  {
    if ((PED::IS_PED_IN_VEHICLE(Global_35, iLocal_465, false) || PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, iLocal_465)) || PED::GET_VEHICLE_PED_IS_ENTERING(Global_35) == iLocal_465)
    {
      return true;
    }
  }
  return false;
}