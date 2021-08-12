// fm_deathmatch_controler.ysc @ L279125
void func_4014()
{
  int iVar0;
  int iVar1;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_USING(PLAYER::PLAYER_PED_ID());
    iVar1 = ENTITY::GET_ENTITY_MODEL(iVar0);
    if (iVar1 == joaat("rhino") || iVar1 == joaat("khanjali"))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
      {
        VEHICLE::SET_VEHICLE_TANK_TURRET_POSITION(iVar0, 0f, true);
        VEHICLE::_DISABLE_VEHICLE_TURRET_MOVEMENT_THIS_FRAME(iVar0);
      }
      CAM::_SET_GAMEPLAY_CAM_RELATIVE_ROTATION(0f, 0f, 1f);
    }
  }
}