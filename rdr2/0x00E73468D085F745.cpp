// mob2.ysc @ L36884
int func_791(char[4] cParam0)
{
  func_474(0);
  func_476(&iLocal_1622);
  func_1321(cParam0, bLocal_1641, 0, 1);
  PED::SET_PED_COMBAT_ATTRIBUTES(bLocal_1641, 27, false);
  func_1322(1);
  if (PED::IS_PED_USING_ACTION_MODE(Global_35))
  {
    PED::SET_PED_USING_ACTION_MODE(Global_35, false, -1, 0);
  }
  func_165();
  func_979(bLocal_1641, joaat("MOB2_RIDE1"), 0);
  return 1;
}