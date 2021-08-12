// fm_bj_race_controler.ysc @ L70924
void func_653(bool bParam0)
{
  int iVar0;
  
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
    if (VEHICLE::_GET_HAS_RETRACTABLE_WHEELS(iVar0))
    {
      if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("blazer5"))
      {
        if (bParam0)
        {
          if (!VEHICLE::_GET_IS_WHEELS_LOWERED_STATE_ACTIVE(iVar0))
          {
            Global_2405077.f_2888 = 1;
            Global_2405077.f_2889 = 0;
          }
        }
        else
        {
          Global_2405077.f_2889 = 1;
          Global_2405077.f_2888 = 0;
        }
      }
    }
  }
}