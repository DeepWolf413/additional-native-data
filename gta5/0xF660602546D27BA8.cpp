// fm_bj_race_controler.ysc @ L271748
void func_3615()
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
    if (VEHICLE::_GET_HAS_RETRACTABLE_WHEELS(iVar0) && VEHICLE::_GET_IS_WHEELS_LOWERED_STATE_ACTIVE(iVar0))
    {
      VEHICLE::_RAISE_RETRACTABLE_WHEELS(iVar0);
    }
  }
}