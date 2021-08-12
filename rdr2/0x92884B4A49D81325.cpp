// mary1.ysc @ L33564
bool func_725(char[4] cParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(func_173(7)))
  {
    func_1192(func_173(7), 0, 0);
  }
  func_366(cParam0, 16);
  WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
  WEAPON::_0x94A3C1B804D291EC(Global_35, 0, 0, 0, 1);
  PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
  PED::_CLEAR_PED_BLOOD_DAMAGE_FACIAL(Local_135[0 /*9*/], 6);
  PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(Local_135[0 /*9*/], 10, "ALL");
  GRAPHICS::REMOVE_PARTICLE_FX_FROM_ENTITY(Local_135[0 /*9*/]);
  return cParam0->f_607 == cParam0->f_607;
}