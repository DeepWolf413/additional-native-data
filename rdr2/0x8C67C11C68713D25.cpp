// beat_chain_gang.ysc @ L5789
bool func_139(int iParam0)
{
  if (ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    return false;
  }
  return PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iParam0);
}