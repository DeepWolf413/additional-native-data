// cornwall1.ysc @ L36059
bool func_771(var uParam0)
{
  func_1310(Local_760[1 /*8*/], 1, 0);
  func_1310(Local_760[2 /*8*/], 1, 0);
  if (func_1311(&(vLocal_896[4 /*3*/]), 3f))
  {
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_254[0 /*11*/], func_174(1, 4), -1, 0, 0, 0, 0, iLocal_311[0], 0, 1, 0);
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_254[2 /*11*/], func_174(3, 4), -1, 0, 0, 0, 0, 0, 0, 1, 0);
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_254[1 /*11*/], func_174(8, 8), -1, 1, 0, 1, 0, iLocal_311[8], 0, 1, 0);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_254[0 /*11*/], true);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_254[2 /*11*/], true);
    PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(Local_254[1 /*11*/], true);
    CLOCK::SET_CLOCK_TIME(23, 0, 0);
    CLOCK::PAUSE_CLOCK(true, 0);
    func_397(Local_760[0 /*8*/], func_228(7, 3), 2, 1073741824 /* Float: 2f */);
    func_1312();
    PED::SET_PED_CONFIG_FLAG(Global_35, 43, true);
    ENTITY::_0x18FF3110CF47115D(Global_35, 9, 0);
    ENTITY::SET_ENTITY_COORDS_NO_OFFSET(Local_14.f_106[1], 1238.694f, -434.665f, 89.988f, false, true, true);
    ENTITY::SET_ENTITY_ROTATION(Local_14.f_106[1], -4.32f, -88.56f, -44.64f, 2, true);
    func_1313();
    return uParam0->f_607 == uParam0->f_607;
  }
  return false;
}