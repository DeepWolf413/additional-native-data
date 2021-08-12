// epsilon6.ysc @ L36852
void func_282()
{
  WEAPON::GIVE_WEAPON_TO_PED(Local_182, joaat("weapon_digiscanner"), 0, true, true);
  PED::SET_PED_CAN_SWITCH_WEAPON(Local_182, false);
  AUDIO::STOP_PED_SPEAKING(Local_182, true);
  PED::SET_PED_DIES_WHEN_INJURED(Local_182, true);
  PED::SET_PED_CAN_BE_TARGETTED(Local_182, false);
  TASK::OPEN_SEQUENCE_TASK(&iLocal_261);
  TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -2887.95f, 3194.88f, 10.06f, -2887.95f, 3194.88f, 10.06f, 1.2f, false, 0.5f, 4f, true, 0, false, -957453492);
  TASK::TASK_PLAY_ANIM(0, "rcmepsilonism6", "cultist_idle_a", 2f, -2f, -1, 0, 0f, false, false, false);
  TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -2888.92f, 3203.76f, 10.6f, -2888.92f, 3203.76f, 10.6f, 1.2f, false, 0.5f, 4f, true, 0, false, -957453492);
  TASK::TASK_PLAY_ANIM(0, "rcmepsilonism6", "cultist_idle_a", 2f, -2f, -1, 0, 0f, false, false, false);
  TASK::TASK_GO_TO_COORD_WHILE_AIMING_AT_COORD(0, -2895.37f, 3199.37f, 10.03f, -2895.37f, 3199.37f, 10.03f, 1.2f, false, 0.5f, 4f, true, 0, false, -957453492);
  TASK::TASK_PLAY_ANIM(0, "rcmepsilonism6", "cultist_idle_a", 2f, -2f, -1, 0, 0f, false, false, false);
  TASK::SET_SEQUENCE_TO_REPEAT(iLocal_261, true);
  TASK::CLOSE_SEQUENCE_TASK(iLocal_261);
  TASK::TASK_PERFORM_SEQUENCE(Local_182, iLocal_261);
}