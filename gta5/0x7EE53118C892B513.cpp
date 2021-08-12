// am_mp_armory_truck.ysc @ L4531
void func_74()
{
  if (func_14(PLAYER::PLAYER_ID(), 1, 1))
  {
    if (!PED::GET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true))
    {
      PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 342, true);
      MISC::SET_BIT(&(Local_2678.f_3), 8);
    }
  }
}