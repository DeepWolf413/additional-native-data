// am_pi_menu.ysc @ L396334
int func_5676()
{
  if (ENTITY::DOES_ENTITY_EXIST(Global_1301911) && !ENTITY::IS_ENTITY_DEAD(Global_1301911, false))
  {
    if (((VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(Global_1301911, 3) || VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(Global_1301911, 2)) || VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(Global_1301911, 0)) || VEHICLE::_IS_VEHICLE_NEON_LIGHT_ENABLED(Global_1301911, 1))
    {
      return 1;
    }
  }
  return 0;
}