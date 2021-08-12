// def_comp_brain.ysc @ L3579
void func_84(var uParam0)
{
  if (func_93(uParam0->f_5, func_92(func_91()), 1, 0))
  {
    PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 1, false);
    PED::SET_PED_COMBAT_ATTRIBUTES(uParam0->f_5, 3, true);
  }
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam0->f_5, false);
  PED::_0x8B1E8E35A6E814EA(uParam0->f_5, joaat("NOTACKLING"), -1082130432 /* Float: -1f */);
  func_246(*uParam0, 1, 0, 1);
  func_98(uParam0, 1073741824 /* Float: 2f */);
  func_170(uParam0, 27);
  func_2(uParam0, 23);
}