// event_area_appleseed_stg1.ysc @ L8971
bool func_257(int iParam0, int iParam1)
{
  if (DECORATOR::DECOR_EXIST_ON(iParam0, "HAS_VOICE") && DECORATOR::DECOR_GET_BOOL(iParam0, "HAS_VOICE"))
  {
    return true;
  }
  if (iParam1 && AUDIO::_0xF0EE69F500952FA5(iParam0))
  {
    return true;
  }
  return false;
}