// act_bankrobbery01.ysc @ L21023
bool func_521(var uParam0, int iParam1)
{
  if (PED::_0x5203038FF8BAE577(Global_35, 46, iParam1) || PED::_0x5203038FF8BAE577(Global_35, 55, iParam1))
  {
    if (uParam0->f_19 == 0)
    {
      uParam0->f_19 = func_732(Global_35, 1, 0, 0);
    }
    else
    {
      return ((((!WEAPON::_0x5809DBCA0A37C82B(uParam0->f_19) && uParam0->f_19 != joaat("WEAPON_THROWN_THROWING_KNIVES")) && uParam0->f_19 != joaat("WEAPON_THROWN_TOMAHAWK")) && uParam0->f_19 != joaat("WEAPON_THROWN_TOMAHAWK_ANCIENT")) && uParam0->f_19 != joaat("WEAPON_UNARMED"));
    }
  }
  else if (uParam0->f_19 != 0)
  {
    uParam0->f_19 = 0;
  }
  return false;
}