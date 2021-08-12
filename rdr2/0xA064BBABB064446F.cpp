// homeinvasion.ysc @ L50591
void func_1266(int iParam0)
{
  int iVar0;

  if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
  {
    func_2688(*iParam0);
    iVar0 = 0;
    while (iVar0 <= 10)
    {
      PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(*iParam0, iVar0, "ALL");
      iVar0++;
    }
    PED::CLEAR_PED_ENV_DIRT(*iParam0);
    PED::_0xA064BBABB064446F(*iParam0);
    PED::_0xA7A806677F8DE138(*iParam0);
    PED::CLEAR_PED_DECORATIONS(*iParam0);
    PED::_0xAF041C10756C30FB(*iParam0, 1, 1, 1);
  }
}