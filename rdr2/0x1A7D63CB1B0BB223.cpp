// rcm_sadie11.ysc @ L31746
bool func_1008()
{
  if (func_1607())
  {
    PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 0, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 3, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 5, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 17, false);
    PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 58, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 12, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 44, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 57, true);
    PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 43, false);
    PED::SET_PED_COMBAT_ATTRIBUTES(iLocal_430, 42, false);
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_430, 512, true);
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_430, 1024, true);
    PED::SET_PED_FLEE_ATTRIBUTES(iLocal_430, 0, true);
    TASK::_0x1A7D63CB1B0BB223(iLocal_430);
    PED::REGISTER_HATED_TARGETS_AROUND_PED(iLocal_430, 500f);
    TASK::TASK_COMBAT_HATED_TARGETS(iLocal_430, 3f);
    return true;
  }
  return false;
}