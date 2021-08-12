// fm_race_creator.ysc @ L230461
void func_2184(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(Global_2441237.f_614[iParam0]))
  {
    if (!ENTITY::IS_ENTITY_DEAD(Global_2441237.f_614[iParam0], false))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2441237.f_614[iParam0]))
      {
        if (VEHICLE::_0x5BA68A0840D546AC(Global_2441237.f_614[iParam0], Global_2441237.f_613))
        {
          VEHICLE::_0x4419966C9936071A(Global_2441237.f_614[iParam0]);
        }
      }
    }
  }
}