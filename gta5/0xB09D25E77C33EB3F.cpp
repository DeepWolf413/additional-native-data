// freemode.ysc @ L966445
int func_15099(var uParam0)
{
  var uVar0;
  
  if (VEHICLE::GET_VEHICLE_NUMBER_OF_PASSENGERS(*uParam0) <= 1)
  {
    if (!func_15100(*uParam0))
    {
      if (VEHICLE::_IS_PED_EXCLUSIVE_DRIVER_OF_VEHICLE(*uParam0, PLAYER::PLAYER_PED_ID(), &uVar0))
      {
        if (VEHICLE::GET_VEHICLE_DOOR_LOCK_STATUS(*uParam0) == 9)
        {
          return 1;
        }
      }
    }
  }
  return 0;
}