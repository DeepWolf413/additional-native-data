// shoprobberies.ysc @ L7965
bool func_290()
{
  func_311(&Local_62);
  func_334();
  if (func_669())
  {
    if (func_313(&(Local_62.f_1), 256) || func_313(&(Local_62.f_1), 65536))
    {
      if (!LAW::_0x856CE8FDE2416602(Local_62.f_170))
      {
        return true;
      }
    }
    else
    {
      func_154(Local_62, 1);
      func_262(1);
      func_309(&(Local_62.f_1), func_238(Local_62), Local_62.f_170.f_1, Local_62.f_1284);
      func_91(268435456);
      func_285();
      func_256(8);
      return false;
    }
  }
  if (func_275() && func_670())
  {
    return true;
  }
  return false;
}