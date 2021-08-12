// gang2.ysc @ L55097
bool func_1357()
{
  float fVar0;

  if (ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(iLocal_378[1]))
  {
    fVar0 = ENTITY::_0x6D58167F62238284(iLocal_378[1]);
    if (fVar0 > 100f)
    {
      return true;
    }
  }
  return false;
}