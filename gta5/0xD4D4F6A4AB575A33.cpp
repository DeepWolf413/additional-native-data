// exile1.ysc @ L18559
void func_291()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < Local_69.x)
  {
    if (iVar0 != 0)
    {
      if (ENTITY::DOES_ENTITY_EXIST(Local_69[iVar0 /*3*/]))
      {
        VEHICLE::DELETE_VEHICLE(&(Local_69[iVar0 /*3*/]));
      }
    }
    iVar0++;
  }
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_525[2], false))
  {
    VEHICLE::SET_VEHICLE_DOOR_BROKEN(iLocal_525[2], 2, true);
  }
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(Local_69[0 /*3*/], false))
  {
    VEHICLE::SET_VEHICLE_ENGINE_ON(Local_69[0 /*3*/], true, true, false);
  }
}