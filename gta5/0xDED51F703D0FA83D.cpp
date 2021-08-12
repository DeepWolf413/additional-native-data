// armenian1.ysc @ L41085
void func_344()
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3048[0 /*7*/], false) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_3048[1 /*7*/], false))
  {
    VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_3048[0 /*7*/], true);
    VEHICLE::LOWER_CONVERTIBLE_ROOF(Local_3048[1 /*7*/], true);
  }
}