// beat_foot_robbery.ysc @ L17908
void func_558()
{
  int iVar0;

  PED::_0x89F5E7ADECCCB49C(iLocal_528[2], "INJURED_GENERAL");
  PED::_0x16F798A05BB9E3B5(iLocal_528[2]);
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_STAND_STILL(0, 100);
  func_146(iLocal_528[2], &iVar0, 0.5f, 0, 1, 1);
  func_94(&uLocal_594, 0);
  func_715();
  func_260(0, 0);
  func_131(&(Local_14.f_5), 0);
  func_132(&(Local_14.f_5), 1);
  func_42(&(Local_14.f_5), 0);
  func_38(&(Local_14.f_5), 0);
  func_43(&(Local_14.f_5), 0);
}