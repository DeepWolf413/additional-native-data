// beat_lost_friend.ysc @ L7221
void func_228(int iParam0, bool bParam1)
{
  int iVar0;

  if (!func_8(iParam0, 0, 1))
  {
    return;
  }
  iVar0 = func_497(iParam0, 1, 0);
  if (WEAPON::IS_WEAPON_VALID(iVar0))
  {
    if (WEAPON::_IS_WEAPON_TORCH(iVar0))
    {
      WEAPON::_0xCEF4C65DE502D367(iParam0, 1, 1, 0, 0);
    }
  }
  if (bParam1)
  {
    TASK::TASK_COMBAT_PED(iParam0, Global_35, 33554432, 0);
  }
  else
  {
    TASK::TASK_COMBAT_PED(iParam0, Global_35, 0, 0);
  }
  PED::SET_PED_KEEP_TASK(iParam0, true);
}