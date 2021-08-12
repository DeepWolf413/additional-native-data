// act_cinema.ysc @ L68179
void func_352(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !ENTITY::IS_ENTITY_DEAD(iParam0, false))
  {
    if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
    {
      if (Global_1695571 > -1)
      {
        if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("GBMissionFire", 3))
        {
          if (!DECORATOR::DECOR_EXIST_ON(iParam0, "GBMissionFire"))
          {
            DECORATOR::DECOR_SET_INT(iParam0, "GBMissionFire", Global_1695571);
          }
        }
      }
    }
  }
}