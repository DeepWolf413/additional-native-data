// camp_beechershope.ysc @ L48541
bool func_1530(int iParam0)
{
  int iVar0;

  iParam0 = func_782(iParam0);
  if (iParam0 <= -1)
  {
    return false;
  }
  if (iParam0 >= 7)
  {
    return false;
  }
  iVar0 = func_369(iParam0);
  if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
  {
    if (iParam0 == func_1174())
    {
      return true;
    }
    return false;
  }
  if (iVar0 == PLAYER::_GET_SADDLE_HORSE_FOR_PLAYER(PLAYER::PLAYER_ID()))
  {
    return true;
  }
  return false;
}