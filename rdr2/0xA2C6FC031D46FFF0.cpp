// homeinvasion.ysc @ L54011
bool func_1446(int iParam0, int iParam1)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return false;
  }
  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    return false;
  }
  if (NETWORK::GET_TIME_DIFFERENCE(PED::GET_PED_TIME_OF_DEATH(iParam0), MISC::GET_GAME_TIMER()) > iParam1)
  {
    return false;
  }
  iVar0 = PED::GET_PED_CAUSE_OF_DEATH(iParam0);
  if (!func_2384(iVar0))
  {
    return false;
  }
  if (WEAPON::_IS_WEAPON_MELEE(iVar0))
  {
    return false;
  }
  if (WEAPON::_0x5809DBCA0A37C82B(iVar0) && WEAPON::_0xEA522F991E120D45(iVar0))
  {
    return false;
  }
  return true;
}