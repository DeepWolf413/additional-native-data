// epsilon6.ysc @ L35563
int func_239()
{
  if (func_481(Local_156.x))
  {
    if (VEHICLE::GET_LANDING_GEAR_STATE(Local_156.x) == 5)
    {
      func_521("Detected plane landing gear is broken");
      return 0;
    }
    else if (VEHICLE::IS_VEHICLE_STUCK_ON_ROOF(Local_156.x))
    {
      func_521("Detected plane is stuck on roof");
      return 0;
    }
    else if (VEHICLE::GET_VEHICLE_ENGINE_HEALTH(Local_156.x) <= 0f)
    {
      func_521("Detected plane engine health is <= 0");
      return 0;
    }
    else if (VEHICLE::IS_VEHICLE_STUCK_TIMER_UP(Local_156.x, 3, 30000))
    {
      func_521("Detected plane IS_VEHICLE_STUCK_TIMER_UP > JAMMED_TIME");
      return 0;
    }
    else
    {
      return 1;
    }
  }
  func_521("The plane is broken!");
  return 0;
}