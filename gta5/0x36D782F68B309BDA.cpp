// abigail1.ysc @ L39323
void func_298(int iParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
  {
    if (VEHICLE::_GET_HAS_ROCKET_BOOST(iParam0))
    {
      if (VEHICLE::_IS_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0))
      {
        VEHICLE::_SET_VEHICLE_ROCKET_BOOST_ACTIVE(iParam0, false);
      }
    }
  }
}