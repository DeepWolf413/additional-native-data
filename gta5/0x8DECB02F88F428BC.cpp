// agency_heist2.ysc @ L968
void func_14(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_90))
  {
    OBJECT::DELETE_OBJECT(&iLocal_90);
  }
  if (!WEAPON::HAS_PED_GOT_WEAPON(iParam0, joaat("weapon_briefcase_02"), false))
  {
    WEAPON::GIVE_WEAPON_TO_PED(iParam0, joaat("weapon_briefcase_02"), -1, true, true);
  }
  WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("weapon_briefcase_02"), true);
}