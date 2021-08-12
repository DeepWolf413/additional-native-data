// fussar1.ysc @ L35476
int func_773(char[4] cParam0)
{
  func_1263(cParam0);
  func_1325();
  if (func_445(iLocal_1282, 0))
  {
    PED::_SET_PED_BLACKBOARD_FLOAT(iLocal_1282, "stealth", 1f, -1);
    func_1293();
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, func_455(12, 6), -1, 1, 0, 1, 0, iLocal_1140[1], 0, 0, 0);
    TASK::TASK_STAY_IN_COVER(0);
    func_1294(iLocal_1282, 1, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */);
  }
  return 1;
}