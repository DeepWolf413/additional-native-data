// pause_menu_replay_launcher.ysc @ L2789
void func_33(int iParam0)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return;
  }
  func_137(iParam0);
  PED::CLEAR_PED_WETNESS(iParam0);
  PED::_0xA7A806677F8DE138(iParam0);
  PED::_0xA064BBABB064446F(iParam0);
  PED::CLEAR_PED_ENV_DIRT(iParam0);
  PED::_0x9184788BFF1EDAD7(iParam0, 0f);
  PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, 10, "ALL");
  iVar0 = 0;
  while (iVar0 < 10)
  {
    PED::CLEAR_PED_DAMAGE_DECAL_BY_ZONE(iParam0, iVar0, "ALL");
    iVar0++;
  }
}