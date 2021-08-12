// am_casino_peds.ysc @ L311410
void func_4348(var uParam0, var uParam1)
{
  if (!MISC::IS_BIT_SET(uParam0->f_350, false))
  {
    if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) > 0)
    {
      PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), 0, false);
    }
    MISC::SET_BIT(&(uParam0->f_350), false);
  }
  if (!MISC::IS_BIT_SET(uParam0->f_350, true))
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
    {
      if (PED::IS_PED_WEARING_HELMET(PLAYER::PLAYER_PED_ID()))
      {
        PED::REMOVE_PED_HELMET(PLAYER::PLAYER_PED_ID(), true);
      }
    }
    MISC::SET_BIT(&(uParam0->f_350), true);
  }
}