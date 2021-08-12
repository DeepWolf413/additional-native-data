// beechers_cow.ysc @ L511
bool func_7()
{
  if (!STREAMING::HAS_MODEL_LOADED(joaat("A_C_COW")))
  {
    return false;
  }
  if (!STREAMING::HAS_MODEL_LOADED(joaat("P_STOOL02X")))
  {
    return false;
  }
  if (!STREAMING::HAS_MODEL_LOADED(joaat("S_BUCKETMILK01X")))
  {
    return false;
  }
  if (!STREAMING::HAS_CLIP_SET_LOADED("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW"))
  {
    return false;
  }
  if (!STREAMING::_HAS_MOVE_NETWORK_DEF_LOADED("script_mar5_milkcow_cow"))
  {
    return false;
  }
  return true;
}