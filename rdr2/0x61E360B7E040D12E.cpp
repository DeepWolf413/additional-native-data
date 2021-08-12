// loanshark_undertaker.ysc @ L49403
void func_1678(int iParam0, char[4] cParam1)
{
  func_692("LS_UND_BRW_CON", 0);
  if (iParam0 == 1)
  {
    TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Local_1614[iParam0 /*97*/], Global_35, 0f, 0f, 0f, 1f, -1, 0);
    func_1674(iParam0, 1);
    return;
  }
  if (func_388(&(cParam1->f_2106), "LS_UND_BRW1_ENC", 0))
  {
    TASK::TASK_GO_STRAIGHT_TO_COORD_RELATIVE_TO_ENTITY(Local_1614[iParam0 /*97*/], Global_35, 0f, 0f, 0f, 1f, -1, 0);
    func_1674(iParam0, 1);
  }
}