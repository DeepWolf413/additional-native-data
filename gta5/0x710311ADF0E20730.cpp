// agency_heist2.ysc @ L949
void func_13(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_90))
  {
    OBJECT::DELETE_OBJECT(&iLocal_90);
  }
  iLocal_90 = WEAPON::GET_WEAPON_OBJECT_FROM_PED(iParam0, false);
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_90))
  {
    PHYSICS::ACTIVATE_PHYSICS(iLocal_90);
  }
  else
  {
    iLocal_90 = WEAPON::CREATE_WEAPON_OBJECT(joaat("weapon_briefcase_02"), -1, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_87, -1f, 0f, 0f), true, 1f, 0, 0, 1);
    PHYSICS::ACTIVATE_PHYSICS(iLocal_90);
  }
  WEAPON::REMOVE_WEAPON_FROM_PED(iParam0, joaat("weapon_briefcase_02"));
}