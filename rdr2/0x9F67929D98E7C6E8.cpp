// braithwaites1.ysc @ L61597
int func_1387(int iParam0)
{
  int iVar0;

  iVar0 = 0;
  if (ENTITY::IS_ENTITY_DEAD(Local_218[iParam0 /*8*/]))
  {
    return iVar0;
  }
  iVar0 = WEAPON::_0x9F67929D98E7C6E8(Local_218[iParam0 /*8*/], joaat("GROUP_REVOLVER"), 0, 1);
  if (iVar0 == 0)
  {
    iVar0 = WEAPON::_0x9F67929D98E7C6E8(Local_218[iParam0 /*8*/], joaat("GROUP_PISTOL"), 0, 1);
  }
  if (iVar0 == 0)
  {
    if (WEAPON::HAS_PED_GOT_WEAPON(Local_218[iParam0 /*8*/], joaat("WEAPON_SHOTGUN_SAWEDOFF"), 0, true))
    {
      iVar0 = joaat("WEAPON_SHOTGUN_SAWEDOFF");
    }
  }
  return iVar0;
}