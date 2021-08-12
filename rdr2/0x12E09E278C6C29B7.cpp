// coachrobberies_gang2.ysc @ L10362
bool func_225()
{
  int iVar0;
  int iVar1;
  int iVar2;

  if (bLocal_217)
  {
    return true;
  }
  if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vLocal_214, true) < 15f)
  {
    iVar0 = 1;
  }
  if (func_29(iLocal_153, 0) && func_522(iLocal_153, vLocal_214, 1) < 15f)
  {
    iVar1 = 1;
    bLocal_232 = true;
  }
  if (func_29(iLocal_154, 0) && func_522(iLocal_154, vLocal_214, 1) < 15f)
  {
    iVar2 = 1;
  }
  if ((iVar0 && iVar1) && iVar2)
  {
    PLAYER::_0x12E09E278C6C29B7(PLAYER::PLAYER_ID());
    func_556(6);
    bLocal_217 = true;
    return true;
  }
  return false;
}