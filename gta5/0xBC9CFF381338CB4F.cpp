// fm_bj_race_controler.ysc @ L70953
void func_654()
{
  int iVar0;
  
  if (Global_2405077.f_489.f_5)
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
    {
      iVar0 = PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false);
      if (VEHICLE::_GET_VEHICLE_HAS_PARACHUTE(iVar0))
      {
        if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("ruiner2"))
        {
          Global_2405077.f_2895 = 1;
        }
      }
      else if (ENTITY::GET_ENTITY_MODEL(iVar0) == joaat("oppressor"))
      {
        Global_2405077.f_2895 = 1;
      }
    }
  }
}