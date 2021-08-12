// epsilon6.ysc @ L36556
void func_270()
{
  switch (iLocal_190)
  {
    case 4:
    case 5:
      if (!func_481(Local_163))
      {
        Local_163 = VEHICLE::CREATE_VEHICLE(Local_163.f_1, Local_163.f_3, Local_163.f_6, true, true, false);
        VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_163, 5f);
        VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Local_163, true);
        VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_163, 13f);
        VEHICLE::SET_VEHICLE_COLOURS(Local_163, 157, 157);
        VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_163, 157, 5);
      }
      break;
    
    default:
      if (!func_481(Local_163))
      {
        Local_163 = VEHICLE::CREATE_VEHICLE(Local_163.f_1, Local_163.f_3, Local_163.f_6, true, true, false);
        VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Local_163, 5f);
        VEHICLE::SET_VEHICLE_HAS_BEEN_OWNED_BY_PLAYER(Local_163, true);
        VEHICLE::SET_VEHICLE_DOORS_LOCKED(Local_163, 3);
        VEHICLE::SET_VEHICLE_DIRT_LEVEL(Local_163, 13f);
        VEHICLE::SET_VEHICLE_COLOURS(Local_163, 157, 157);
        VEHICLE::SET_VEHICLE_EXTRA_COLOURS(Local_163, 157, 5);
      }
      break;
  }
  VEHICLE::SET_VEHICLE_MODEL_IS_SUPPRESSED(Local_163.f_1, true);
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_163.f_1);
}