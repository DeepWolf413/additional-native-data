// fishing_core.ysc @ L4508
bool func_139(var uParam0, int iParam1)
{
  int iVar0;

  if (!func_80(iParam1, 16384))
  {
    return false;
  }
  if (func_80(iParam1, 32768))
  {
    return true;
  }
  if (iParam1 == 0 && PED::IS_PED_IN_ANY_VEHICLE(func_53(uParam0, iParam1), true))
  {
    if (!func_285(func_53(uParam0, iParam1), -828834893))
    {
      TASK::TASK_LEAVE_ANY_VEHICLE(func_53(uParam0, iParam1), 0, 67108864);
    }
    return false;
  }
  if (func_80(iParam1, 8192))
  {
    iVar0 = 0;
    if (iParam1 != 0)
    {
      iVar0 = 2;
    }
    TASK::_0x517D01BF27B682D1(func_53(uParam0, iParam1), Global_1900073.f_194, 0f, 0f, 0f, func_154((uParam0[iParam1 /*263*/])->f_258), iVar0);
    func_153(iParam1, 65536, 1);
  }
  func_197(iParam1, 32768);
  return func_80(iParam1, 32768);
}