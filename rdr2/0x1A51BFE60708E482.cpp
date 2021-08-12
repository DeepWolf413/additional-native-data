// beat_parlor_ambush.ysc @ L10121
bool func_316()
{
  int iVar0;
  int iVar1;

  if (!PED::IS_PED_USING_ANY_SCENARIO(iLocal_662))
  {
    return true;
  }
  iVar0 = PLAYER::PLAYER_ID();
  if (PLAYER::_IS_PLAYER_FREE_FOCUSING(iVar0))
  {
    if (PLAYER::GET_PLAYER_TARGET_ENTITY(iVar0, &iVar1))
    {
      if (ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iVar1) == iLocal_662)
      {
        return true;
      }
    }
  }
  return false;
}