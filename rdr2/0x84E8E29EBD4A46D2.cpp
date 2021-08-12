// ambush_bnd_cliff1.ysc @ L2053
bool func_64(bool bParam0)
{
  int iVar0;

  iVar0 = PLAYER::GET_CAUSE_OF_MOST_RECENT_FORCE_CLEANUP();
  if (bParam0)
  {
    return true;
  }
  if (func_209(iVar0))
  {
    return false;
  }
  if (func_210(iVar0, 1) || func_210(iVar0, 2))
  {
    return true;
  }
  return false;
}