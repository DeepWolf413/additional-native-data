// am_mp_hangar.ysc @ L77888
void func_910()
{
  if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    if (VEHICLE::IS_VEHICLE_MODEL(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false), joaat("valkyrie")))
    {
      if (!MISC::IS_BIT_SET(Local_2065.f_1, 20))
      {
        PAD::STOP_PAD_SHAKE(0);
        PAD::_0xF239400E16C23E08(0, 1);
        MISC::SET_BIT(&(Local_2065.f_1), 20);
      }
    }
  }
  else if (MISC::IS_BIT_SET(Local_2065.f_1, 20))
  {
    PAD::_0xF239400E16C23E08(0, -1);
    MISC::CLEAR_BIT(&(Local_2065.f_1), 20);
  }
}