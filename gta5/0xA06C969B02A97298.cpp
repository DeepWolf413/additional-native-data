// act_cinema.ysc @ L69233
int func_371(int iParam0)
{
  int iVar0;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
    {
      if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("MPBitset", 3))
      {
        if (DECORATOR::DECOR_EXIST_ON(iParam0, "MPBitset"))
        {
          iVar0 = DECORATOR::DECOR_GET_INT(iParam0, "MPBitset");
        }
        if (MISC::IS_BIT_SET(iVar0, 24))
        {
          return 1;
        }
      }
    }
  }
  return 0;
}