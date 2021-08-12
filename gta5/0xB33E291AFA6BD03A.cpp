// extreme3.ysc @ L102815
void func_590()
{
  if (func_642(iLocal_3330))
  {
    TASK::OPEN_SEQUENCE_TASK(&iLocal_3332);
    TASK::TASK_PLAY_ANIM(0, "rcmextreme3", "jump_fall", 8f, -8f, -1, 8, 0f, false, false, false);
    TASK::TASK_PARACHUTE_TO_TARGET(0, 30.3356f, -795.6482f, 44.26f);
    TASK::CLOSE_SEQUENCE_TASK(iLocal_3332);
    TASK::TASK_PERFORM_SEQUENCE(iLocal_3330, iLocal_3332);
    TASK::CLEAR_SEQUENCE_TASK(&iLocal_3332);
    RECORDING::_0x293220DA1B46CEBC(3f, 5f, 1);
  }
}