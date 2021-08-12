// fm_bj_race_controler.ysc @ L70622
void func_636()
{
  int iVar0;
  
  if (!CAM::IS_SCREEN_FADED_OUT())
  {
    if (func_9166(PLAYER::PLAYER_ID(), 1, 1))
    {
      if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
      {
        iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
        NETWORK::SET_ENTITY_LOCALLY_VISIBLE(iVar0);
      }
    }
    if (!func_637())
    {
      NETWORK::SET_LOCAL_PLAYER_VISIBLE_LOCALLY(false);
    }
  }
}