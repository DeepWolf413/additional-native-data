// winter1.ysc @ L63991
void func_1629()
{
  if (!func_177(iLocal_909, 256))
  {
    if (ENTITY::DOES_ENTITY_EXIST(uLocal_1064[1]))
    {
      if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_1064[1], joaat("WEAPON_MELEE_LANTERN"), 0, false))
      {
        WEAPON::_0xB0FB9B196A3D13F0(uLocal_1064[1], 1, joaat("WEAPON_MELEE_LANTERN"));
        func_179(&iLocal_909, 256);
      }
    }
  }
  if (!func_177(iLocal_909, 512))
  {
    if (ENTITY::DOES_ENTITY_EXIST(uLocal_1064[2]))
    {
      if (WEAPON::HAS_PED_GOT_WEAPON(uLocal_1064[2], joaat("WEAPON_MELEE_LANTERN"), 0, false))
      {
        WEAPON::_0xB0FB9B196A3D13F0(uLocal_1064[2], 1, joaat("WEAPON_MELEE_LANTERN"));
        func_179(&iLocal_909, 512);
      }
    }
  }
}