// rcm_sadie11.ysc @ L39885
bool func_1270()
{
  int iVar0;

  iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
  if (ENTITY::DOES_ENTITY_EXIST(iVar0) && VEHICLE::IS_VEHICLE_MODEL(iVar0, iLocal_345))
  {
    if (((((VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, true, false) && !ENTITY::IS_ENTITY_DEAD(func_1809(iVar0, 0))) && !ENTITY::IS_ENTITY_DEAD(func_1809(iVar0, 1))) && !ENTITY::IS_ENTITY_ON_SCREEN(iVar0)) && !ENTITY::IS_ENTITY_ON_SCREEN(func_1809(iVar0, 0))) && !ENTITY::IS_ENTITY_ON_SCREEN(func_1809(iVar0, 1)))
    {
      iLocal_760 = iVar0;
      if (!ENTITY::IS_ENTITY_A_MISSION_ENTITY(iLocal_760))
      {
        ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_760, true, false);
      }
      return true;
    }
    else
    {
      func_1138();
    }
  }
  return false;
}