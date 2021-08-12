// ambush_bnd_sniper_attack.ysc @ L8064
void func_296()
{
  int iVar0;
  vector3 vVar1;

  vVar1 = { func_414(&Local_274, 0) };
  PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[0], false, 0, false);
  func_127(&iLocal_15, 0, 1);
  func_128(&iLocal_15, 0, 1);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 0, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
  TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
  func_197(iLocal_15[0], &iVar0, 0, 0, 1, 1);
  vVar1 = { func_414(&Local_274, 1) };
  PED::_SET_PED_CROUCH_MOVEMENT(iLocal_15[1], false, 0, false);
  func_127(&iLocal_15, 1, 1);
  func_127(&iLocal_15, 1, 1);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_ENTITY(0, vVar1, Global_35, 2f, 0, 1056964608 /* Float: 0.5f */, 1082130432 /* Float: 4f */, 0, 0, 0, joaat("FIRING_PATTERN_BURST_FIRE"), 20000, 0);
  TASK::TASK_COMBAT_PED(0, Global_35, 33554432, 0);
  func_197(iLocal_15[1], &iVar0, 0, 0, 1, 1);
  func_275(&iLocal_15, 0, joaat("BLIP_STYLE_ENEMY"), 0);
  func_275(&iLocal_15, 1, joaat("BLIP_STYLE_ENEMY"), 0);
  func_240(&Local_274, 16);
}