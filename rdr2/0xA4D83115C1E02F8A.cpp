// finale2.ysc @ L35558
bool func_764(var uParam0)
{
  PED::SET_PED_CONFIG_FLAG(Local_111[1 /*14*/], 167, true);
  PED::SET_PED_CONFIG_FLAG(Local_111[0 /*14*/], 167, true);
  MISC::CLEAR_ANGLED_AREA_OF_VEHICLES(-1752.414f, -1125.432f, 85.32949f, -1625.373f, -1068.16f, 59.1219f, 82.75f, 1097784);
  func_182(1063695460, 0, 0f, 0, 1, 0, 1, 0);
  func_450(uParam0, bLocal_169, 128);
  func_450(uParam0, bLocal_170, 128);
  func_450(uParam0, bLocal_168, 128);
  func_927(bLocal_169, -1642.819f, -1351.479f, 83.4029f, 66.7456f, 2, 1073741824 /* Float: 2f */);
  func_927(bLocal_170, -1637.12f, -1363.094f, 83.4029f, 200.8857f, 2, 1073741824 /* Float: 2f */);
  func_927(bLocal_168, -1642.438f, -1359.88f, 83.4029f, 58.7532f, 2, 1073741824 /* Float: 2f */);
  TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(bLocal_169, -1642.819f, -1351.479f, 83.4029f, 2f, -1, true, false, true, false);
  TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(bLocal_170, -1637.12f, -1363.094f, 83.4029f, 2f, -1, true, false, true, false);
  TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(bLocal_168, -1642.438f, -1359.88f, 83.4029f, 2f, -1, true, false, true, false);
  func_182(1606546482, 1, 0f, 0, 0, 0, 1, 0);
  func_182(818583340, 1, 0f, 0, 0, 0, 1, 0);
  func_182(-1984149246, 1, 0f, 0, 0, 0, 1, 0);
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_111[0 /*14*/], false);
  MISC::_SET_WEATHER_TYPE(joaat("SHOWER"), false, true, true, 30f, false);
  func_162(1);
  func_1279(&(iLocal_1157[12]), 0, 1, 1);
  func_1279(&(iLocal_1157[11]), 0, 1, 1);
  func_1279(&(iLocal_1157[13]), 0, 1, 1);
  return uParam0->f_607 == uParam0->f_607;
}