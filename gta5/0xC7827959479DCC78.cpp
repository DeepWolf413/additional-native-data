// act_cinema.ysc @ L79823
void func_443(int iParam0)
{
  struct<3> Var0;
  
  if (Global_262145.f_19863)
  {
    if (ENTITY::DOES_ENTITY_EXIST(iParam0))
    {
      if (NETWORK::NETWORK_GET_ENTITY_IS_NETWORKED(iParam0))
      {
        Var0.x = ENTITY::GET_ENTITY_MODEL(iParam0);
        Var0.f_1 = MISC::GET_HASH_KEY(VEHICLE::GET_VEHICLE_NUMBER_PLATE_TEXT(iParam0));
        if (DECORATOR::DECOR_IS_REGISTERED_AS_TYPE("RandomID", 3))
        {
          if (!DECORATOR::DECOR_EXIST_ON(iParam0, "RandomID"))
          {
            Var0.f_2 = MISC::GET_RANDOM_INT_IN_RANGE(0, 65535);
            DECORATOR::DECOR_SET_INT(iParam0, "RandomID", Var0.f_2);
          }
          else
          {
            Var0.f_2 = DECORATOR::DECOR_GET_INT(iParam0, "RandomID");
          }
        }
        func_444(Var0);
      }
    }
  }
}