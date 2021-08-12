// beat_poisoned.ysc @ L478
void func_13()
{
  int iVar0;

  func_51(&uLocal_584, &uLocal_585);
  EVENT::REMOVE_SHOCKING_EVENT(iLocal_589);
  PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
  iVar0 = 0;
  while (iVar0 < 5)
  {
    func_52(&(uLocal_473[iVar0]), 1);
    iVar0++;
  }
  func_53();
  PED::_0x39A2FC5AF55A52B1(uLocal_58[0], -1);
  ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(uLocal_58[0]));
  if (func_32(Local_314[0 /*32*/].f_11, 0, 1))
  {
    PED::_0x39A2FC5AF55A52B1(Local_314[0 /*32*/].f_11, -1);
    ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_314[0 /*32*/].f_11));
  }
  if (func_32(uLocal_58[0], 0, 1))
  {
    PED::_0xBBF6D1D07C02D00A(uLocal_58[0], 5);
  }
  func_54(&(uLocal_60[0]));
  func_55();
  func_56(Global_35);
  func_57(&Local_68, &uLocal_58, &uLocal_60, iLocal_67, iLocal_508, iLocal_509, 0, 1, 0, 1);
  SCRIPTS::TERMINATE_THIS_THREAD();
}