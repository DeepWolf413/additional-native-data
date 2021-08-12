// feud1.ysc @ L65543
bool func_1404(int iParam0, bool bParam1)
{
  bool bVar0;

  if ((PLAYER::IS_PLAYER_PLAYING(iParam0) && ENTITY::DOES_ENTITY_EXIST(bParam1)) && !ENTITY::IS_ENTITY_DEAD(bParam1))
  {
    if (((PLAYER::_0x3EE1F7A8C32F24E1(iParam0, &bVar0, 0, 0) && ENTITY::DOES_ENTITY_EXIST(bVar0)) && bVar0 == bParam1) || ((PLAYER::_0xBEA3A6E5F5F79A6F(iParam0, &bVar0) && ENTITY::DOES_ENTITY_EXIST(bVar0)) && bVar0 == bParam1))
    {
      return true;
    }
  }
  return false;
}