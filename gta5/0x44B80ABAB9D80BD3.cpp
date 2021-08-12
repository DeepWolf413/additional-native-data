// fm_bj_race_controler.ysc @ L539729
void func_9149()
{
  if (GRAPHICS::GET_USINGSEETHROUGH() && PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    if (!func_9150(PLAYER::PLAYER_PED_ID()))
    {
      PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 419, true);
      GRAPHICS::SET_SEETHROUGH(false);
    }
  }
}