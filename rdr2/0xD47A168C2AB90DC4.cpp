// beat_domestic_dispute.ysc @ L510
void func_10()
{
  EVENT::REMOVE_ALL_SHOCKING_EVENTS(true);
  func_69(1);
  func_69(0);
  func_70(&Local_17, &uLocal_309, &uLocal_306, iLocal_312, uLocal_316, uLocal_315, 0, 1, 0, 1);
  func_71(&uLocal_543, &uLocal_531);
  func_71(&uLocal_546, &uLocal_532);
  func_72(iLocal_545);
  SCRIPTS::TERMINATE_THIS_THREAD();
}