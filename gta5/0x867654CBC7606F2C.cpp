// business_battles.ysc @ L206540
void func_3011(int iParam0, bool bParam1)
{
  struct<3> Var0;
  
  PED::SET_PED_DIES_WHEN_INJURED(iParam0, true);
  if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
  {
    Var0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true) };
    MISC::SHOOT_SINGLE_BULLET_BETWEEN_COORDS(Var0.x, (Var0.f_1 - 0.1f), (Var0.f_2 - 0.1f), Var0.x, (Var0.f_1 + 0.1f), (Var0.f_2 + 0.1f), 300, true, joaat("weapon_assaultshotgun"), 0, true, true, -1f);
    PED::SET_PED_CONFIG_FLAG(iParam0, 227, true);
    ENTITY::SET_ENTITY_HEALTH(iParam0, 0, 0);
    func_1177(iParam0, -1, bParam1);
  }
}