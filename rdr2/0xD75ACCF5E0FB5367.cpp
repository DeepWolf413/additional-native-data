// ambush_exc_scm_prec.ysc @ L8733
void func_318()
{
  func_196(&(Local_274.f_8[2 /*3*/]));
  func_148(&Local_274, Local_15[0], Global_35, "CALLOUT_FOLLOW_ROB_ATTACK_MALE", 50f, 1, 1744022339, 2);
  PED::SET_PED_USING_ACTION_MODE(Local_15[0], true, -1, 0);
  TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15[0], Global_35, -1, -1f, -1f, -1f);
}