// business_battles_sell.ysc @ L332793
int func_5435(int iParam0)
{
  int iVar0;
  
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_2316.f_31[iParam0 /*42*/]))
  {
    iVar0 = NETWORK::NET_TO_VEH(Local_2316.f_31[iParam0 /*42*/]);
    if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
    {
      return SYSTEM::FLOOR(VEHICLE::GET_VEHICLE_BODY_HEALTH(iVar0));
    }
    return 0;
  }
  return func_699(iParam0);
}