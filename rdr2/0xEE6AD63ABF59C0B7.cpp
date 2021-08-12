// abigail2_1.ysc @ L26030
void func_468(int iParam0, int iParam1)
{
  if (iParam1 == 1)
  {
    func_960();
  }
  if (ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_15))
  {
    if (ENTITY::IS_ENTITY_ATTACHED(Global_1899848.f_15))
    {
      ENTITY::DETACH_ENTITY(Global_1899848.f_15, true, true);
      PHYSICS::ACTIVATE_PHYSICS(Global_1899848.f_15);
    }
    ENTITY::SET_ENTITY_AS_NO_LONGER_NEEDED(&(Global_1899848.f_15));
  }
  if (!PED::IS_PED_INJURED(Global_35))
  {
    if (iParam0 == 1)
    {
      if (!func_959(4))
      {
        WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_UNARMED"), true, 0, false, false);
      }
    }
    PED::_0x58F7DB5BD8FA2288(Global_35);
  }
  Global_1899848.f_15 = 0;
}