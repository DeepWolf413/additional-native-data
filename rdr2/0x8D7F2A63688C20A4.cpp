// ambush_pnk_type1.ysc @ L3590
void func_141()
{
  int iVar0;
  bool bVar1;
  int iVar2;
  int iVar3;

  iVar2 = func_280(Local_15[Local_274.f_7], 0);
  if (func_281(iVar2) && WEAPON::_IS_WEAPON_TWO_HANDED(iVar2))
  {
    bVar1 = false;
  }
  else
  {
    iVar3 = WEAPON::GET_BEST_PED_WEAPON(Local_15[Local_274.f_7], false, false);
    if (func_281(iVar3))
    {
      WEAPON::SET_CURRENT_PED_WEAPON(Local_15[Local_274.f_7], iVar3, false, 0, false, false);
      bVar1 = true;
    }
  }
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  TASK::TASK_SEEK_CLEAR_LOS_TO_ENTITY(0, Global_35, 150f, 1.5f, 0.2f);
  if (bVar1)
  {
    TASK::TASK_SWAP_WEAPON(0, 1, 0, 0, 0);
  }
  TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
  func_203(Local_15[Local_274.f_7], &iVar0, 0, 0, 1, 1);
  func_273(Local_15[Local_274.f_7], Global_36, 5, 0, 2);
}