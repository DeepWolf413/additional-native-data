// camp_beechershope.ysc @ L48079
bool func_1520(int iParam0)
{
  if (func_1116(iParam0) == joaat("EMOTE"))
  {
    return false;
  }
  if (!INVENTORY::_0x3D10D7179D7034AF(func_511(0), iParam0, func_1835(0)))
  {
    return false;
  }
  switch (iParam0)
  {
    case joaat("KIT_CAMP"):
    case joaat("KIT_CAMP_SIMPLE"):
      if (!Global_1392040.f_2)
      {
        func_1836(1, 1);
        TELEMETRY::_TELEMETRY_CAMP_CREATED(0);
        return true;
      }
      else
      {
        return false;
      }
      break;
    case joaat("KIT_HANDHELD_CATALOG"):
      func_311(MISC::_CREATE_VAR_STRING(0, 163043886 /* GXTEntry: "You are not allowed to use Handheld Catalogue at the moment." */, Global_36559), 10000, 0, 0, 0, 1);
      break;
  }
  return true;
}