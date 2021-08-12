// act_cinema.ysc @ L83165
int func_452(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
  {
    if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0) || func_453(iParam0))
    {
      return 1;
    }
  }
  return 0;
}