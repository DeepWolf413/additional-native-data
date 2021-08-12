// native3.ysc @ L98598
bool func_2214(vector3 vParam0, float fParam3)
{
  vector3 vVar0;

  if (PLAYER::IS_PLAYER_PLAYING(PLAYER::PLAYER_ID()))
  {
    if (PLAYER::IS_PLAYER_FREE_AIMING(PLAYER::PLAYER_ID()) || PLAYER::IS_PLAYER_TARGETTING_ANYTHING(PLAYER::PLAYER_ID()))
    {
      PLAYER::_0x3DAABE78A23694BC(PLAYER::PLAYER_ID(), &vVar0);
      if (func_2486(vVar0, vParam0, fParam3, 1))
      {
        return true;
      }
      else
      {
        return false;
      }
    }
  }
  return false;
}