// beat_arms_deal.ysc @ L10118
void func_307(int iParam0, bool bParam1)
{
  int iVar0;

  if (!func_34(iLocal_35[iParam0], 0, 0))
  {
    return;
  }
  func_508(&(iLocal_35[iParam0]));
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  if (bParam1)
  {
    TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 75f, 33554432, 0);
  }
  else
  {
    TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 75f, 0, 0);
  }
  func_212(iLocal_35[iParam0], &iVar0, 0, 0, 1, 1);
}