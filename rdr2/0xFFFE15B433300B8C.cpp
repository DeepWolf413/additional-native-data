// ambush_exc_wagon_turret.ysc @ L12388
void func_418(int iParam0, int iParam1, int iParam2)
{
  if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false, false)) && ENTITY::DOES_ENTITY_EXIST(iParam1))
  {
    VEHICLE::_0xFFFE15B433300B8C(iParam0, iParam1, iParam2);
  }
}