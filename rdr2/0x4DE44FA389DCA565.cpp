// coachrobberies.ysc @ L3593
bool func_96(int iParam0, float fParam1)
{
  float fVar0;

  PLAYER::SET_PLAYER_SNEAKING_NOISE_MULTIPLIER(PLAYER::PLAYER_ID(), 0.5f);
  fVar0 = PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID());
  if (BUILTIN::VDIST(ENTITY::GET_ENTITY_COORDS(iParam0, true, false), Global_36) < fParam1)
  {
    if (fVar0 > 8f)
    {
      return true;
    }
  }
  return false;
}