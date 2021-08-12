// fm_bj_race_controler.ysc @ L84006
void func_768(var uParam0)
{
  if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(uParam0->f_5318))
  {
    if (!ENTITY::IS_ENTITY_DEAD(uParam0->f_5318, false))
    {
      ENTITY::SET_ENTITY_HEALTH(uParam0->f_5318, 1000, 0);
      VEHICLE::SET_VEHICLE_ENGINE_HEALTH(uParam0->f_5318, 1000f);
      VEHICLE::SET_VEHICLE_PETROL_TANK_HEALTH(uParam0->f_5318, 1000f);
      VEHICLE::SET_VEHICLE_FIXED(uParam0->f_5318);
      HUD::SET_ABILITY_BAR_VALUE(100f, 100f);
    }
  }
}