// beat_outlaw_transport.ysc @ L12358
bool func_322(int iParam0, bool bParam1)
{
  int iVar0;

  if (MAP::DOES_BLIP_EXIST(uLocal_793[iParam0]))
  {
  }
  else
  {
    func_116(uLocal_801[iParam0], &(uLocal_793[iParam0]), joaat("BLIP_STYLE_ENEMY"), 580546400, 0, 0);
  }
  if (!PED::IS_PED_USING_ANY_SCENARIO(uLocal_801[iParam0]) || (PED::IS_PED_USING_ANY_SCENARIO(uLocal_801[iParam0]) && PED::_0x802092B07E3B1EEA(uLocal_801[iParam0], Global_36, 3)))
  {
    PED::_0x2208438012482A1A(uLocal_801[iParam0], false, false);
    TASK::CLEAR_SEQUENCE_TASK(&iVar0);
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    if (bParam1)
    {
      PED::_0x8ACC0506743A8A5C(uLocal_801[iParam0], joaat("SCRIPT_CLASSICMOVEANDAIM"), 1, -1082130432 /* Float: -1f */);
      TASK::TASK_GO_TO_ENTITY_WHILE_AIMING_AT_ENTITY_USING_COMBAT_STYLE(0, Global_35, Global_35, 1.5f, 0, 7f, 1082130432 /* Float: 4f */, 1, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 0);
    }
    TASK::TASK_AIM_GUN_AT_ENTITY(0, Global_35, -1, false, 1);
    func_316(uLocal_801[iParam0], &iVar0, 0, 0, 1, 1);
    return true;
  }
  return false;
}