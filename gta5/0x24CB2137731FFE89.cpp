// am_casino_limo.ysc @ L53462
void func_592()
{
  if (!func_593())
  {
    return;
  }
  if (func_623(3))
  {
    switch (VEHICLE::_GET_VEHICLE_DOOR_DESTROY_TYPE(func_7(), 1))
    {
      case 3:
        if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7()) > 1)
        {
          VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(func_7(), 1, 1);
        }
        break;
      
      case 1:
        if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(func_7()) < 2)
        {
          VEHICLE::SET_VEHICLE_INDIVIDUAL_DOORS_LOCKED(func_7(), 1, 3);
        }
        break;
      }
  }
}