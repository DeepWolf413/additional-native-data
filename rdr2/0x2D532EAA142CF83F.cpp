// beat_bounty_transport.ysc @ L12428
void func_337(int iParam0, int iParam1)
{
  if (!func_115(iParam0, 0, 1) || !func_115(iParam1, 0, 1))
  {
    return;
  }
  TASK::TASK_FOLLOW_ENTITY_WHILE_AIMING_AT_ENTITY(iParam0, iParam1, Global_35, 0, -1, 1056964608 /* Float: 0.5f */, 1.75f, 12);
}