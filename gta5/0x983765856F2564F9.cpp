// business_battles_sell.ysc @ L366454
void func_6175(int iParam0)
{
  ENTITY::SET_ENTITY_INVINCIBLE(iParam0, false);
  VEHICLE::SET_VEHICLE_ENGINE_HEALTH(iParam0, -1000f);
  VEHICLE::SET_VEHICLE_ENGINE_CAN_DEGRADE(iParam0, true);
}