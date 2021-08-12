// fm_content_auto_shop_delivery.ysc @ L153107
void func_2559(int iParam0, int iParam1)
{
  if (!func_2466(iParam1, 1120685857, 1))
  {
    if (func_774(Local_1331.f_26[iParam0 /*22*/]))
    {
      Stack.Push(iParam0);
      Stack.Push(iParam1);
      Call_Loc(Local_382.f_139.f_2.f_13.f_2);
      func_2526(iParam0, iParam1);
      Stack.Push(iParam1);
      Stack.Push(iParam0);
      Call_Loc(Local_382.f_139.f_2.f_13);
      Stack.Push(iParam0);
      Call_Loc(Local_382.f_139.f_2.f_13.f_1);
      TASK::TASK_COMBAT_HATED_TARGETS_IN_AREA(StackVal, StackVal, StackVal, StackVal, StackVal, 0);
    }
  }
}