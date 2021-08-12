// am_vehicle_spawn.ysc @ L43075
int func_946(int iParam0, var uParam1, var uParam2)
{
  int iVar0;
  int iVar1;
  
  *uParam1 = 0;
  *uParam2 = 0;
  iVar0 = VEHICLE::GET_PED_USING_VEHICLE_DOOR(iParam0, 2);
  iVar1 = VEHICLE::GET_PED_USING_VEHICLE_DOOR(iParam0, 3);
  if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
  {
    *uParam1 = 1;
  }
  if (ENTITY::DOES_ENTITY_EXIST(iVar1) && !ENTITY::IS_ENTITY_DEAD(iVar1, false))
  {
    *uParam2 = 1;
  }
  if (*uParam1 && *uParam2)
  {
    return 1;
  }
  return 0;
}