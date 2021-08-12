// am_mp_smpl_interior_int.ysc @ L318653
void func_5469()
{
  int iVar0;
  
  if ((ENTITY::DOES_ENTITY_EXIST(PLAYER::PLAYER_PED_ID()) && !ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false)) && PED::IS_PED_IN_ANY_HELI(PLAYER::PLAYER_PED_ID()))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
    if (PED::IS_PED_SITTING_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), iVar0) && VEHICLE::GET_PED_IN_VEHICLE_SEAT(iVar0, -1, false) == PLAYER::PLAYER_PED_ID())
    {
      if (TASK::GET_ACTIVE_VEHICLE_MISSION_TYPE(iVar0) == 4)
      {
        TASK::_CLEAR_VEHICLE_TASKS(iVar0);
      }
    }
  }
}