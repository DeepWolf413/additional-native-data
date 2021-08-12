// marston5_1.ysc @ L50599
void func_1264(var uParam0)
{
  if (!ENTITY::IS_ENTITY_DEAD(*uParam0))
  {
    VEHICLE::SET_VEHICLE_UNDRIVEABLE(*uParam0, true);
    VEHICLE::SET_VEHICLE_DOORS_LOCKED(*uParam0, 10);
  }
}