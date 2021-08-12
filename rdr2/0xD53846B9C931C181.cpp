// laramie1.ysc @ L35887
int func_806(var uParam0)
{
  if (func_33(uParam0) == 1)
  {
    if (PED::IS_PED_ON_MOUNT(Global_35))
    {
      PED::_REMOVE_PED_FROM_MOUNT(Global_35, true, false);
    }
    func_1256(Global_36, 80f, 0);
    PED::_0x9851DE7AEC10B4E1(Global_36, 80f, 1, 0);
    WEAPON::_HIDE_PED_WEAPONS(Global_35, 2, true);
    WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 0, false, false);
    WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), false, 1, false, false);
    WEAPON::_0xD53846B9C931C181(Global_35, joaat("WEAPON_UNARMED"), 50f);
    WEAPON::_0xD53846B9C931C181(Local_14.f_14[0], joaat("WEAPON_UNARMED"), 50f);
  }
  return 1;
}