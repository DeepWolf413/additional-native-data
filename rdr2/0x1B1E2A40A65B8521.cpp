// gang1.ysc @ L35724
int func_763(var uParam0)
{
  if (!func_165(Global_35, 0))
  {
    return 0;
  }
  func_1311(-1, 0);
  PED::SET_PED_CONFIG_FLAG(Global_35, 263, true);
  PED::SET_AI_WEAPON_DAMAGE_MODIFIER(0.5f);
  func_140(uParam0, func_33(uParam0), 16777216);
  return 1;
}