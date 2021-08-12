// grays3.ysc @ L36584
bool func_771(char[4] cParam0)
{
  TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(Local_115[0 /*9*/], func_389(3, 6), -1, 0, 0f, 1, 1, iLocal_143[6], 0, 1, 0);
  if (func_1254(cParam0, Local_115[1 /*9*/]))
  {
    func_1255(cParam0, Local_115[1 /*9*/], 128);
  }
  if (func_1254(cParam0, Local_115[2 /*9*/]))
  {
    func_1255(cParam0, Local_115[2 /*9*/], 128);
  }
  func_1231(Local_115[1 /*9*/], func_1230(4, 11), 2, 1073741824 /* Float: 2f */);
  PHYSICS::_0x8EEDFD8921389928(func_389(3, 6), 2f, 0f, 10f, 0f, 100f, 0, 1);
  PHYSICS::_0x8EEDFD8921389928(func_389(3, 7), 2f, 0f, 10f, 0f, 100f, 0, 1);
  return cParam0->f_607 == cParam0->f_607;
}