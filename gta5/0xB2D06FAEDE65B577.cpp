// assassin_bus.ysc @ L18376
void func_364()
{
  int iVar0;
  
  if (iLocal_1042 > 4)
  {
    if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
    {
      iVar0 = VEHICLE::GET_LAST_DRIVEN_VEHICLE();
      if (ENTITY::DOES_ENTITY_EXIST(iVar0))
      {
        if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar0, false))
        {
          if ((iVar0 != iLocal_1805 && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("bus")) && ENTITY::GET_ENTITY_MODEL(iVar0) != joaat("coach"))
          {
            iLocal_1805 = iVar0;
            ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_1805, true, true);
            VEHICLE::SET_VEHICLE_HAS_BEEN_DRIVEN_FLAG(iLocal_1805, false);
          }
        }
      }
    }
  }
}