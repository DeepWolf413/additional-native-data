// abigail2.ysc @ L46135
void func_454(var uParam0)
{
  switch (ENTITY::GET_ENTITY_MODEL(*uParam0))
  {
    case joaat("starling"):
      if (VEHICLE::GET_VEHICLE_MOD(*uParam0, 4) == 0)
      {
        VEHICLE::SET_VEHICLE_MOD(*uParam0, 13, 0, false);
      }
      else
      {
        VEHICLE::REMOVE_VEHICLE_MOD(*uParam0, 13);
      }
      break;
    
    case joaat("slamtruck"):
      VEHICLE::SET_VEHICLE_MOD(*uParam0, 24, 3, false);
      break;
  }
}