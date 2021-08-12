// camera_photomode.ysc @ L4003
bool func_110()
{
  int iVar0;

  if (func_151())
  {
    iVar0 = TASK::_0x804425C4BBD00883(Global_35);
    if (func_152(iVar0) == 2041469314 || func_152(iVar0) == -77448735)
    {
      return false;
    }
    else
    {
      if (func_152(iVar0) == 0)
      {
        if (SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("COFFEE_DRINKING")) > 0 || SCRIPTS::_GET_NUMBER_OF_REFERENCES_OF_SCRIPT_WITH_NAME_HASH(joaat("STEW_EATING")) > 0)
        {
          return false;
        }
      }
      return true;
    }
  }
  return false;
}