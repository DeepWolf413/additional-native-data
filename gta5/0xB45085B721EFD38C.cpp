// arena_carmod.ysc @ L234627
int func_1965(char* sParam0, bool bParam1)
{
  if (ENTITY::DOES_ENTITY_EXIST(Local_722.f_405) && VEHICLE::IS_VEHICLE_DRIVEABLE(Local_722.f_405, false))
  {
    if (bParam1)
    {
      StringCopy(sParam0, VEHICLE::GET_VEHICLE_MOD_COLOR_1_NAME(Local_722.f_405, false), 16);
    }
    else
    {
      StringCopy(sParam0, VEHICLE::GET_VEHICLE_MOD_COLOR_2_NAME(Local_722.f_405), 16);
    }
    if (MISC::GET_HASH_KEY(sParam0) != 0)
    {
      return 1;
    }
  }
  return 0;
}