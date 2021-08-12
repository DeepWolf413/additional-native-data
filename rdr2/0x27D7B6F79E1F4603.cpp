// loanshark_hunter.ysc @ L33813
bool func_1081(var uParam0, int iParam1, bool bParam2)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(*uParam0))
  {
    return false;
  }
  if (ENTITY::IS_ENTITY_DEAD(*uParam0) && bParam2)
  {
  }
  iVar0 = INTERIOR::GET_KEY_FOR_ENTITY_IN_ROOM(*uParam0);
  if (iParam1 == -1)
  {
    if (func_1625(iVar0))
    {
      return true;
    }
  }
  else if (iVar0 == iParam1)
  {
    return true;
  }
  return false;
}