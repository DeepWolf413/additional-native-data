// barry1.ysc @ L45662
void func_450(struct<3> Param0, struct<3> Param3, int iParam6)
{
  PLAYER::SET_PLAYER_HEALTH_RECHARGE_MULTIPLIER(PLAYER::PLAYER_ID(), 0f);
  if (!func_421(Param0) && !func_421(Param3))
  {
  }
  iLocal_163 = func_15(iLocal_209, 0);
  func_393(&iLocal_163, 0);
  if (iParam6 == 1)
  {
    PED::APPLY_DAMAGE_TO_PED(PLAYER::PLAYER_PED_ID(), 100000, true, 0);
    PED::EXPLODE_PED_HEAD(PLAYER::PLAYER_PED_ID(), joaat("weapon_sniperrifle"));
  }
}