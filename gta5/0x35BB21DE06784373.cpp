// fm_bj_race_controler.ysc @ L535343
void func_8978(var uParam0, var uParam1)
{
  int iVar0;
  
  if (!func_250(uParam0))
  {
    return;
  }
  if (!func_8979())
  {
    return;
  }
  if (!func_765(PLAYER::PLAYER_PED_ID()))
  {
    return;
  }
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), true);
    if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar0))
    {
      ENTITY::SET_ENTITY_PROOFS(iVar0, true, true, true, true, true, false, false, false);
      VEHICLE::_0x35BB21DE06784373(iVar0, 0);
      ENTITY::SET_ENTITY_INVINCIBLE(iVar0, true);
      VEHICLE::_0x9640E30A7F395E4B(iVar0, 0f, 0f, 0f, 1065353216);
    }
    PED::SET_PED_CAN_BE_TARGETTED(PLAYER::PLAYER_PED_ID(), false);
    ENTITY::SET_ENTITY_PROOFS(PLAYER::PLAYER_PED_ID(), true, true, true, true, true, false, false, false);
  }
}