// am_hold_up.ysc @ L16091
void func_392()
{
  TASK::OPEN_SEQUENCE_TASK(&iLocal_546);
  TASK::TASK_LOOK_AT_ENTITY(0, PLAYER::PLAYER_PED_ID(), -1, 0, 2);
  TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_enter", 8f, -8f, -1, 262192, 0f, false, false, false);
  TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 8f, -4f, -1, 262193, 0f, false, false, false);
  TASK::CLOSE_SEQUENCE_TASK(iLocal_546);
  TASK::OPEN_SEQUENCE_TASK(&iLocal_547);
  TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "handsup_base", 4f, -4f, -1, 262193, 0f, false, false, false);
  TASK::CLOSE_SEQUENCE_TASK(iLocal_547);
  TASK::OPEN_SEQUENCE_TASK(&iLocal_548);
  TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_533, 2f, -1, 0.25f, false, fLocal_536);
  TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0f, false, false, false);
  TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0f, false, false, false);
  TASK::TASK_SMART_FLEE_COORD(0, Local_533, 250f, -1, true, false);
  TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
  TASK::CLOSE_SEQUENCE_TASK(iLocal_548);
  TASK::OPEN_SEQUENCE_TASK(&iLocal_550);
  TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_intro", 8f, -4f, -1, 262144, 0f, false, false, false);
  TASK::TASK_PLAY_ANIM(0, "mp_am_hold_up", "cower_loop", 8f, -4f, -1, 270337, 0f, false, false, false);
  TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
  TASK::CLOSE_SEQUENCE_TASK(iLocal_550);
  TASK::OPEN_SEQUENCE_TASK(&iLocal_549);
  TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_533, 2f, -1, 0.25f, false, (fLocal_536 - 180f));
  TASK::TASK_SWAP_WEAPON(0, true);
  TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(0, 20f, 0);
  TASK::CLOSE_SEQUENCE_TASK(iLocal_549);
}