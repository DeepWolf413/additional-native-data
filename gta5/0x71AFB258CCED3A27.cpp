// freemode.ysc @ L928447
char* func_13849(var uParam0)
{
  if (!VEHICLE::_GET_DOES_VEHICLE_HAVE_TOMBSTONE(func_13851()))
  {
    return "";
  }
  if ((func_13850(uParam0, joaat("dominator4"), 6, -1) || func_13850(uParam0, joaat("dominator5"), 6, -1)) || func_13850(uParam0, joaat("dominator6"), 6, -1))
  {
    if (PAD::_IS_USING_KEYBOARD(0))
    {
      return "AVMH_TOMBSTONE_PC";
    }
    return "AVMH_TOMBSTONE";
  }
  return "";
}