// beat_outlaw_transport.ysc @ L13570
bool func_346()
{
  int iVar0;

  if (ENTITY::DOES_ENTITY_EXIST(iLocal_909))
  {
    if (PLAYER::GET_PLAYER_TARGET_ENTITY(PLAYER::PLAYER_ID(), &iVar0))
    {
      if (ENTITY::IS_ENTITY_AN_OBJECT(iVar0))
      {
        if (ENTITY::GET_OBJECT_INDEX_FROM_ENTITY_INDEX(iVar0) == iLocal_909)
        {
          return true;
        }
      }
    }
    if (PLAYER::IS_PLAYER_FREE_AIMING_AT_ENTITY(PLAYER::PLAYER_ID(), iLocal_909))
    {
      return true;
    }
  }
  return false;
}