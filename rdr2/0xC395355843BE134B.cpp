// main.ysc @ L1949
void func_36()
{
  int iVar0;

  if (Global_1347400.f_76)
  {
    return;
  }
  if (ENTITY::IS_ENTITY_DEAD(Global_35))
  {
    return;
  }
  WEAPON::_0xC395355843BE134B(Global_35);
  if (WEAPON::GET_CURRENT_PED_WEAPON(Global_35, &iVar0, false, 0, true))
  {
    if (((iVar0 == joaat("WEAPON_FISHINGROD") || iVar0 == joaat("WEAPON_KIT_BINOCULARS")) || iVar0 == joaat("WEAPON_KIT_CAMERA")) || iVar0 == joaat("WEAPON_KIT_DETECTOR"))
    {
      WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
    }
  }
}