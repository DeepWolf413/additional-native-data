// rcm_war_veteran3.ysc @ L22811
bool func_746(bool bParam0)
{
  float fVar0;

  fVar0 = 0.2f;
  if (!bParam0)
  {
    fVar0 = 0f;
  }
  if (PLAYER::_0x3A6AE4EEE30370FE(PLAYER::PLAYER_ID(), 1) > fVar0)
  {
    return true;
  }
  return false;
}