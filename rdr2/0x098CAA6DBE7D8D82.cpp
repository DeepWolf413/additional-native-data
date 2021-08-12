// native1.ysc @ L73843
int func_1915(int iParam0, vector3 vParam1, float fParam4, bool bParam5, float fParam6, int iParam7, int iParam8, int iParam9)
{
  if (!func_165(*iParam0, 0))
  {
    return 0;
  }
  if (!func_31() || iParam8 == 1)
  {
    func_768(*iParam0, vParam1, fParam4, 2, 1073741824 /* Float: 2f */);
  }
  PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(*iParam0, true);
  ENTITY::SET_ENTITY_INVINCIBLE(*iParam0, bParam5);
  ENTITY::SET_ENTITY_ONLY_DAMAGED_BY_PLAYER(*iParam0, bParam5);
  TASK::_0x098CAA6DBE7D8D82(*iParam0, 1);
  if (iParam9 == 0)
  {
    func_769(*iParam0, 1);
  }
  if (iParam7 == 1)
  {
    func_770(*iParam0, 1);
  }
  TASK::CLEAR_PED_TASKS(*iParam0, true, false);
  if (fParam6 == -1f)
  {
    func_771(*iParam0);
  }
  else
  {
    TASK::TASK_ANIMAL_UNALERTED(*iParam0, -1, 0, 0, 0);
  }
  return 1;
}