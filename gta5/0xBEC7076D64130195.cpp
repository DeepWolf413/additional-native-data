// achievement_controller.ysc @ L14119
int func_112(int iParam0)
{
  if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
  {
    return 0;
  }
  if (func_163(14) && !func_113(iParam0))
  {
    return 0;
  }
  if (!PLAYER::GIVE_ACHIEVEMENT_TO_PLAYER(iParam0))
  {
    return 0;
  }
  if (PLAYER::HAS_ACHIEVEMENT_BEEN_PASSED(iParam0))
  {
    return 1;
  }
  return 0;
}