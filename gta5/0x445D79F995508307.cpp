// arena_carmod.ysc @ L331352
void func_3075()
{
  if (iLocal_1448)
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_1449) && VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_1449, false))
    {
      VEHICLE::RELEASE_PRELOAD_MODS(iLocal_1449);
    }
    iLocal_1448 = 0;
    iLocal_1449 = 0;
  }
}