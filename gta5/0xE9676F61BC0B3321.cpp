// freemode.ysc @ L673838
int func_9604()
{
  if (ENTITY::DOES_ENTITY_EXIST(Global_2453903.f_2846.f_146))
  {
    if (!ENTITY::IS_ENTITY_DEAD(Global_2453903.f_2846.f_146, false))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2453903.f_2846.f_146))
      {
        if (ENTITY::HAS_COLLISION_LOADED_AROUND_ENTITY(Global_2453903.f_2846.f_146))
        {
          ENTITY::FREEZE_ENTITY_POSITION(Global_2453903.f_2846.f_146, false);
          VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(Global_2453903.f_2846.f_146, 5f);
          PHYSICS::ACTIVATE_PHYSICS(Global_2453903.f_2846.f_146);
          ENTITY::SET_ENTITY_DYNAMIC(Global_2453903.f_2846.f_146, true);
          return 1;
        }
      }
      else
      {
        return 1;
      }
    }
    else
    {
      return 1;
    }
  }
  else
  {
    return 1;
  }
  return 0;
}