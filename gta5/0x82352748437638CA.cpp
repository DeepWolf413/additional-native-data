// appmpjoblistnew.ysc @ L315029
int func_4974()
{
  if (!Global_22185)
  {
    return 0;
  }
  if (Global_22183 != 2)
  {
    return 0;
  }
  if (HUD::THEFEED_GET_FIRST_VISIBLE_DELETE_REMAINING() < 0)
  {
    return 0;
  }
  if (func_4972(Global_22182))
  {
    return 1;
  }
  if (func_4970(Global_22182))
  {
    return 1;
  }
  if (func_4975(Global_22182))
  {
    return 1;
  }
  return 0;
}