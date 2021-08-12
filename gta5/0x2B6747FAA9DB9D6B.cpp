// abigail2.ysc @ L36723
void func_297()
{
  if (!func_464(iLocal_162))
  {
    iLocal_162 = VEHICLE::CREATE_VEHICLE(iLocal_161, Local_163, fLocal_166, true, true, false);
    STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_161);
  }
  if (func_464(iLocal_162))
  {
    VEHICLE::SET_VEHICLE_DOORS_LOCKED(iLocal_162, 3);
    VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(iLocal_162, 1);
    VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(iLocal_161, true);
    VEHICLE::SET_VEHICLE_DISABLE_TOWING(iLocal_162, true);
  }
}