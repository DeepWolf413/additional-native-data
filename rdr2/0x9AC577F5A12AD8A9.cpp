// ambush_exc_lookout_attack.ysc @ L3381
void func_132(var uParam0, int iParam1)
{
  if (!func_61((*uParam0)[iParam1], 0, 0))
  {
    return;
  }
  PED::SET_PED_COMBAT_RANGE((*uParam0)[iParam1], 0);
  PED::SET_PED_COMBAT_MOVEMENT((*uParam0)[iParam1], 2);
  func_274(uParam0, iParam1, 65, 80);
  PED::SET_PED_FIRING_PATTERN((*uParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE"));
  PED::_0x20E54854DEF6A54A((*uParam0)[iParam1], joaat("FIRING_PATTERN_BURST_FIRE_IN_COVER"));
}