// abigail2_1.ysc @ L16581
bool func_122(int iParam0)
{
  int iVar0;

  iVar0 = WEAPON::_GET_WEAPON_UNLOCK(iParam0);
  if (iVar0 == 0)
  {
    return false;
  }
  if (UNLOCK::_UNLOCK_IS_UNLOCKED(iVar0))
  {
    return true;
  }
  return false;
}