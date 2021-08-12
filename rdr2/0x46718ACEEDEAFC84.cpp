// short_update.ysc @ L70889
bool func_2283()
{
  if (func_82() != 0)
  {
    return true;
  }
  if (!UNLOCK::_UNLOCK_IS_UNLOCKED(joaat("FEATURE_HONOR")))
  {
    return true;
  }
  if (Global_1132155.f_4620.f_1 & 2 != 0)
  {
    return true;
  }
  if (Global_1132155.f_4620.f_1 & 4 != 0)
  {
    return true;
  }
  if (!NETWORK::HAS_NETWORK_TIME_STARTED())
  {
    return true;
  }
  return false;
}