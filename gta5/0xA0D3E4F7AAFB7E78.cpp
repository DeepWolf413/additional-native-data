// business_battles.ysc @ L257411
void func_3989()
{
  if (func_2198())
  {
    if (func_3971(47))
    {
      if (func_2085(PLAYER::PLAYER_PED_ID(), 3, -1) && !func_3971(48))
      {
        func_2071(PLAYER::PLAYER_PED_ID(), 3, -1, -1);
      }
      PED::SET_PED_DIES_IN_WATER(PLAYER::PLAYER_PED_ID(), true);
      PED::SET_PED_DIES_IN_SINKING_VEHICLE(PLAYER::PLAYER_PED_ID(), true);
      MISC::SET_BIT(&(Global_2544210.f_4658), 22);
      func_126(2048, iLocal_1818, -1, 1, 0);
      PLAYER::_SET_PLAYER_UNDERWATER_TIME_REMAINING(PLAYER::PLAYER_ID(), 100f);
      func_3970(47);
    }
  }
}