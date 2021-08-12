// reverend1.ysc @ L58465
bool func_1480(char[4] cParam0)
{
  if (!func_8(cParam0, 32))
  {
    func_99(cParam0, 32);
  }
  if (!func_380(cParam0, 0, func_33(cParam0)))
  {
    return false;
  }
  if (!ENTITY::DOES_ENTITY_BELONG_TO_THIS_SCRIPT(iLocal_63[0], true))
  {
    ENTITY::SET_ENTITY_AS_MISSION_ENTITY(iLocal_63[0], true, false);
  }
  func_1342(&(iLocal_63[0]));
  PED::SET_PED_COMBAT_MOVEMENT(iLocal_63[0], 1);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_63[0], true);
  PED::_0x89F5E7ADECCCB49C(iLocal_63[0], "Very_Drunk");
  TASK::SET_PED_PATH_MAY_ENTER_WATER(iLocal_63[0], true);
  TASK::SET_PED_PATH_PREFER_TO_AVOID_WATER(iLocal_63[0], false, 1f);
  ENTITY::_0x1AD922AB5038DEF3(iLocal_63[0]);
  func_2061(21, 0, 0);
  PED::SET_PED_CONFIG_FLAG(iLocal_63[0], 72, true);
  TASK::_0xFF745B0346E19E2C(joaat("KNOCKEDOUT_CARRIABLE_HUMAN_NEVER_WAKE_UP"));
  TASK::_0x816A3ACD265E2297(joaat("KNOCKEDOUT_CARRIABLE_HUMAN_NEVER_WAKE_UP"), 1);
  return true;
}