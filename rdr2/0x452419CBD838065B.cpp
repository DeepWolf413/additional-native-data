// homeinvasion.ysc @ L93602
void func_3098(int iParam0, int iParam1)
{
  int iVar0;

  if (!func_159(*iParam0, 0, 1))
  {
    return;
  }
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_SHOCKING_EVENT_REACT(0, Local_268.f_5066[0], 0);
  TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, func_3637(iParam1), Global_35, 2f, 1, 1056964608 /* Float: 0.5f */, 0f, 1, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
  TASK::TASK_COMBAT_PED(0, Global_35, 0, 0);
  func_1304(*iParam0, &iVar0, 0, 0, 1, 1);
  if (!MAP::DOES_BLIP_EXIST(iParam0->f_10))
  {
    func_1331(*iParam0, &(iParam0->f_10), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
  }
  func_1721(iParam0, 1, 100, 1);
  func_2951(*iParam0, Local_268.f_9[4], 0, 0);
  func_319(1, iParam1, 1);
  func_319(4096, iParam1, 1);
}