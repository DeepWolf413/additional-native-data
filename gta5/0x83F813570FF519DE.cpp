// fm_race_creator.ysc @ L433479
void func_6629(int iParam0)
{
  struct<3> Var0;
  int iVar3;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
  {
    iVar3 = Var0.f_1;
    if (ENTITY::DOES_ENTITY_EXIST(Global_2441237.f_614[iVar3]))
    {
      if (!ENTITY::IS_ENTITY_DEAD(Global_2441237.f_614[iVar3], false))
      {
        if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(Global_2441237.f_614[iVar3]))
        {
          VEHICLE::_DISABLE_VEHICLE_NEON_LIGHTS(Global_2441237.f_614[iVar3], Var0.f_2);
        }
      }
    }
  }
}