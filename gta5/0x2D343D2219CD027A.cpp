// dreyfuss1.ysc @ L36620
void func_297()
{
  if (func_437(iLocal_156))
  {
    if (WEAPON::HAS_PED_BEEN_DAMAGED_BY_WEAPON(iLocal_156, joaat("weapon_stungun"), 0))
    {
      if (func_437(iLocal_156))
      {
        ENTITY::SET_ENTITY_HEALTH(iLocal_156, 99, 0);
      }
    }
  }
}