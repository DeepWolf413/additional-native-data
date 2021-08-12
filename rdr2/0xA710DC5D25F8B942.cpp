// loanshark_hunter.ysc @ L59641
void func_2105(int iParam0, bool bParam1)
{
  if (bParam1)
  {
    if (!bLocal_411)
    {
      if (!func_430(iParam0, 1041577989))
      {
        TASK::TASK_HORSE_ACTION(iParam0, 3, 0, 0);
        bLocal_411 = true;
      }
    }
    else if (!func_430(iParam0, 1041577989) || TASK::_0xA710DC5D25F8B942(iParam0, 1041577989) >= 1f)
    {
      if (!func_430(iParam0, -982327190))
      {
        TASK::TASK_STAND_STILL(iParam0, -1);
      }
    }
  }
  else if (!func_430(iParam0, -982327190))
  {
    TASK::TASK_STAND_STILL(iParam0, -1);
  }
}