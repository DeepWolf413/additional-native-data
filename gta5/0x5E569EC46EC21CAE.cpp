// fm_bj_race_controler.ysc @ L287449
void func_3933()
{
  int iVar0;
  struct<14> Var1;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
    if (!ENTITY::IS_ENTITY_DEAD(iVar0, false))
    {
      VEHICLE::_0x5E569EC46EC21CAE(iVar0, false);
      NETWORK::NETWORK_EXPLODE_VEHICLE(iVar0, true, false, PLAYER::PLAYER_ID());
    }
  }
  else if (!ENTITY::IS_ENTITY_DEAD(PLAYER::PLAYER_PED_ID(), false))
  {
    Var1.f_2 = -953753678;
    func_1700(Var1, func_1699(0));
    ENTITY::SET_ENTITY_HEALTH(PLAYER::PLAYER_PED_ID(), 0, 0);
  }
}