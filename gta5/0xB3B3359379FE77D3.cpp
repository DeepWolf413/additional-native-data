// am_mp_defunct_base.ysc @ L309146
void func_4991()
{
  if (!Global_1574428)
  {
    if (NETWORK::NETWORK_IS_ACTIVITY_SESSION())
    {
      if (ENTITY::DOES_ENTITY_EXIST(func_5581()))
      {
        if (func_4992(NETWORK::NETWORK_GET_PLAYER_INDEX_FROM_PED(func_5581()), 170, 0) && !func_4992(PLAYER::PLAYER_ID(), 170, 0))
        {
          MISC::CLEAR_AREA_OF_VEHICLES(Global_4456448.f_69908, 3000f, false, false, false, false, false, false);
          MISC::CLEAR_AREA_OF_VEHICLES(Global_4456448.f_69908, 3000f, false, false, true, false, false, false);
          MISC::CLEAR_AREA_OF_VEHICLES(Global_4456448.f_69908, 3000f, false, false, false, true, false, false);
          PED::SET_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f);
          PED::SET_SCENARIO_PED_DENSITY_MULTIPLIER_THIS_FRAME(0f, 0f);
          VEHICLE::SET_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
          VEHICLE::SET_RANDOM_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
          VEHICLE::SET_PARKED_VEHICLE_DENSITY_MULTIPLIER_THIS_FRAME(0f);
        }
      }
    }
  }
}