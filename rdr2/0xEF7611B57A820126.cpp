// beechers_cow.ysc @ L502
void func_6()
{
  STREAMING::REQUEST_MODEL(joaat("A_C_COW"), false);
  STREAMING::REQUEST_MODEL(joaat("P_STOOL02X"), false);
  STREAMING::REQUEST_MODEL(joaat("S_BUCKETMILK01X"), false);
  STREAMING::REQUEST_CLIP_SET("CLIPSET@MINI_GAMES@STORY@MAR5@MILK_COW");
  STREAMING::_REQUEST_MOVE_NETWORK_DEF("script_mar5_milkcow_cow");
}