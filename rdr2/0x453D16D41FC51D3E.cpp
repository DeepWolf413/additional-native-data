// mary1.ysc @ L33520
bool func_723(var uParam0)
{
  func_1155();
  PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(Local_135[0 /*9*/], 6);
  GRAPHICS::_0x453D16D41FC51D3E(1);
  if (MAP::DOES_BLIP_EXIST(Local_135[0 /*9*/].f_2))
  {
    MAP::_BLIP_REMOVE_MODIFIER(Local_135[0 /*9*/].f_2, 231194138);
  }
  PED::SET_PED_CAN_BE_TARGETTED(Local_135[0 /*9*/], false);
  PED::SET_PED_CONFIG_FLAG(Local_135[0 /*9*/], 233, false);
  PED::SET_PED_CONFIG_FLAG(Local_135[0 /*9*/], 253, true);
  if (!WEAPON::HAS_PED_GOT_WEAPON(Local_135[0 /*9*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 0, false))
  {
    WEAPON::_GIVE_WEAPON_TO_PED_2(Local_135[0 /*9*/], joaat("WEAPON_REVOLVER_CATTLEMAN"), 50, false, true, 0, false, 0.5f, 1f, 752097756, false, 0f, false);
  }
  return uParam0->f_607 == uParam0->f_607;
}