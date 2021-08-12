// am_armwrestling.ysc @ L56361
void func_493(int iParam0, bool bParam1)
{
  if (PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) || PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true))
  {
    if (func_1067() == 0)
    {
      NETWORK::NETWORK_RESURRECT_LOCAL_PLAYER(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false), 0f, false, (func_495(PLAYER::PLAYER_ID(), 1) && !bParam1), iParam0);
      func_494();
    }
    else if (PED::IS_PED_DEAD_OR_DYING(PLAYER::PLAYER_PED_ID(), true))
    {
      PED::RESURRECT_PED(PLAYER::PLAYER_PED_ID());
    }
    else
    {
      PED::REVIVE_INJURED_PED(PLAYER::PLAYER_PED_ID());
    }
  }
  PLAYER::RESET_PLAYER_ARREST_STATE(PLAYER::PLAYER_ID());
  MISC::FORCE_GAME_STATE_PLAYING();
}