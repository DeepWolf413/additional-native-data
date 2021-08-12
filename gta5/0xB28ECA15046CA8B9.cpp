// am_mp_armory_aircraft.ysc @ L263161
void func_4280()
{
  if (Local_1085.f_7 == PLAYER::PLAYER_ID())
  {
    if (!func_337(15475, -1, -1))
    {
      Local_764[PLAYER::PLAYER_ID() /*10*/].f_9 = -1;
    }
    else if (Local_764[PLAYER::PLAYER_ID() /*10*/].f_9 != Global_1372064)
    {
      Local_764[PLAYER::PLAYER_ID() /*10*/].f_9 = Global_1372064;
    }
  }
  if (Local_1085.f_7 != func_10())
  {
    if (Local_1085.f_1263 != Local_764[Local_1085.f_7 /*10*/].f_9)
    {
      Local_1085.f_1263 = Local_764[Local_1085.f_7 /*10*/].f_9;
      if (Local_1085.f_1263 != -1)
      {
        AUDIO::SET_STATIC_EMITTER_ENABLED("se_xm_int_01_avngr_radio", true);
        AUDIO::SET_EMITTER_RADIO_STATION("se_xm_int_01_avngr_radio", AUDIO::GET_RADIO_STATION_NAME(Local_1085.f_1263));
      }
      else
      {
        AUDIO::SET_STATIC_EMITTER_ENABLED("se_xm_int_01_avngr_radio", false);
      }
    }
  }
}