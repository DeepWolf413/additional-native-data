// rcm_bh_bandito_mine.ysc @ L8700
bool func_297(var uParam0)
{
  if (!func_79(uParam0))
  {
    func_80(uParam0, 0);
  }
  if (STREAMING::GET_NUMBER_OF_STREAMING_REQUESTS() == 0)
  {
    return true;
  }
  if (func_511(uParam0) > 15f)
  {
    return true;
  }
  return false;
}