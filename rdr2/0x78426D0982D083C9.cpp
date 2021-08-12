// beat_outlaw_transport.ysc @ L12257
void func_317(int iParam0, bool bParam1)
{
  int iVar0;

  TASK::CLEAR_SEQUENCE_TASK(&iVar0);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  if (func_50(iLocal_819, 32768))
  {
    PED::_0x8ACC0506743A8A5C(uLocal_801[iParam0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
    if (func_373(uLocal_801[iParam0], vLocal_828[iParam0 /*3*/], 1) < 10f)
    {
      TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, vLocal_828[iParam0 /*3*/], Global_35, 1.5f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
    }
    else
    {
      TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, vLocal_828[iParam0 /*3*/], Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 1, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
    }
    TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
  }
  else
  {
    TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, vLocal_828[iParam0 /*3*/], fLocal_820, 20000, 0.25f, 0, fLocal_850[iParam0]);
  }
  if (bParam1)
  {
    func_527(0, joaat("WORLD_HUMAN_GUARD_SCOUT"), 0, 1, 0, -1082130432 /* Float: -1f */);
  }
  func_316(uLocal_801[iParam0], &iVar0, 0.1f, 1.5f, 1, 1);
  if (func_50(iLocal_819, 32768))
  {
  }
}