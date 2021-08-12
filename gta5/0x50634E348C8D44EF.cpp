// fm_bj_race_controler.ysc @ L565990
void func_9644(var uParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_5318))
  {
    if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5318, false))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_5318))
      {
        if (VEHICLE::GET_VEHICLE_HAS_KERS(uParam0->f_5318))
        {
          VEHICLE::SET_VEHICLE_KERS_ALLOWED(uParam0->f_5318, true);
        }
      }
    }
  }
  if (uParam0->f_8803)
  {
    PAD::ENABLE_CONTROL_ACTION(0, 351, true);
    uParam0->f_8803 = 0;
  }
}