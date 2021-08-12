// act_bankrobbery01.ysc @ L22343
bool func_609(int iParam0, int iParam1, int iParam2)
{
  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    return ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, func_1070(iParam1), func_1071(iParam2), 1);
  }
  return false;
}