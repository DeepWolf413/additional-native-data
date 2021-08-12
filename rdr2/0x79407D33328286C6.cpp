// camp_beaverhollow.ysc @ L21285
bool func_718()
{
  switch (Global_1935630.f_44)
  {
    case joaat("WEAPON_FISHINGROD"):
    case joaat("WEAPON_KIT_CAMERA"):
    case joaat("WEAPON_KIT_BINOCULARS"):
    case joaat("OBJECT_2"):
    case joaat("OBJECT_1"):
      return true;
  }
  if (WEAPON::IS_WEAPON_VALID(Global_1935630.f_44))
  {
    if (WEAPON::_IS_WEAPON_LANTERN(Global_1935630.f_44))
    {
      return true;
    }
  }
  return false;
}