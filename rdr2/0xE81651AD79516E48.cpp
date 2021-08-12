// main.ysc @ L1711
bool func_23(char* sParam0, int iParam1)
{
  if (!SCRIPTS::DOES_SCRIPT_EXIST(sParam0))
  {
    return false;
  }
  SCRIPTS::REQUEST_SCRIPT(sParam0);
  if (!SCRIPTS::HAS_SCRIPT_LOADED(sParam0))
  {
    return false;
  }
  SCRIPTS::START_NEW_SCRIPT(sParam0, iParam1);
  SCRIPTS::SET_SCRIPT_AS_NO_LONGER_NEEDED(sParam0);
  return true;
}