// item_bait_herbivore.ysc @ L992
bool func_37(int iParam0, char* sParam1, char* sParam2, float fParam3, int iParam4)
{
  float fVar0;

  if (ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    return true;
  }
  if (!ENTITY::IS_ENTITY_PLAYING_ANIM(iParam0, sParam1, sParam2, iParam4))
  {
    return true;
  }
  if (iParam4 == 2)
  {
    fVar0 = ENTITY::_0x8E46E18AA828334F(iParam0, sParam1, sParam2);
  }
  else
  {
    fVar0 = ENTITY::_GET_ENTITY_ANIM_CURRENT_TIME(iParam0, sParam1, sParam2);
  }
  return MISC::ABSF(((1f - fVar0) - fParam3)) < 0.01f;
}