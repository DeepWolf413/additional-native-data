// smuggler2.ysc @ L74391
bool func_1773(int iParam0)
{
  if (PED::IS_PED_SITTING_IN_ANY_VEHICLE(Local_424[iParam0 /*8*/]))
  {
    if (func_2149(Local_424[iParam0 /*8*/], PED::GET_VEHICLE_PED_IS_IN(Local_424[iParam0 /*8*/], false)) == -1)
    {
      if (ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(Local_424[iParam0 /*8*/], false), 0)) && ENTITY::IS_ENTITY_DEAD(VEHICLE::GET_PED_IN_VEHICLE_SEAT(PED::GET_VEHICLE_PED_IS_IN(Local_424[iParam0 /*8*/], false), 1)))
      {
        return true;
      }
    }
  }
  return false;
}