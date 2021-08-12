// darts.ysc @ L23059
int func_435(var uParam0)
{
  int iVar0;
  
  iVar0 = PLAYER::GET_PLAYERS_LAST_VEHICLE();
  if (ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    if (!func_436(iVar0))
    {
      if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && ENTITY::IS_ENTITY_AT_ENTITY(iVar0, PLAYER::PLAYER_PED_ID(), Local_260, false, true, 0))
      {
        VEHICLE::SET_LAST_DRIVEN_VEHICLE(iVar0);
        ENTITY::SET_ENTITY_COLLISION(iVar0, false, false);
        ENTITY::SET_ENTITY_VISIBLE(iVar0, false, false);
        ENTITY::FREEZE_ENTITY_POSITION(iVar0, true);
        ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iVar0, true, true);
        *uParam0 = iVar0;
        return 1;
      }
    }
  }
  return 0;
}