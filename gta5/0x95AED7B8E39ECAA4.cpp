// arena_carmod.ysc @ L205473
void func_1829(int iParam0)
{
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false))
  {
    if (!DECORATOR::DECOR_EXIST_ON(iParam0, "Sprayed_Vehicle_Decorator"))
    {
      DECORATOR::DECOR_SET_BOOL(iParam0, "Sprayed_Vehicle_Decorator", true);
      if (!DECORATOR::DECOR_EXIST_ON(iParam0, "Sprayed_Vehicle_Timer_Dec"))
      {
        DECORATOR::DECOR_SET_TIME(iParam0, "Sprayed_Vehicle_Timer_Dec", NETWORK::GET_NETWORK_TIME());
      }
    }
  }
}