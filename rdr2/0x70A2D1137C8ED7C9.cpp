// beat_arms_deal.ysc @ L16388
void func_508(var uParam0)
{
  if (!func_34(*uParam0, 0, 0))
  {
    return;
  }
  PED::SET_PED_CONFIG_FLAG(*uParam0, 170, true);
  PED::SET_PED_CONFIG_FLAG(*uParam0, 340, true);
  PED::SET_PED_FLEE_ATTRIBUTES(*uParam0, 512, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 5, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 17, false);
  PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 50, false);
  PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 28, true);
  PED::SET_PED_COMBAT_ATTRIBUTES(*uParam0, 54, true);
}