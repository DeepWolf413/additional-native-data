// cv_cc_am_cnf_01.ysc @ L8193
bool func_299(char* sParam0)
{
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam0))
  {
    if (!HUD::_TEXT_DATABASE_HAS_LOADED(sParam0))
    {
      if (!HUD::_0x3CF96E16265B7DC8(sParam0))
      {
        HUD::_TEXT_DATABASE_REQUEST(sParam0);
      }
      return false;
    }
  }
  return true;
}