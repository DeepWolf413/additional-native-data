// abigail2_1.ysc @ L63424
void func_1701(int iParam0, float fParam1, bool bParam2, bool bParam3)
{
  if (func_1700(iParam0))
  {
    if (OBJECT::DOOR_SYSTEM_GET_DOOR_STATE(iParam0) != 1 || bParam2)
    {
      OBJECT::DOOR_SYSTEM_SET_DOOR_STATE(iParam0, 1);
    }
    OBJECT::DOOR_SYSTEM_SET_OPEN_RATIO(iParam0, fParam1, bParam3);
  }
}