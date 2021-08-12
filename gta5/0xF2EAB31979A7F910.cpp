// fm_content_auto_shop_delivery.ysc @ L152231
void func_2505(int iParam0, int iParam1)
{
  if (!func_2466(iParam1, -1519143300, 1) && func_774(Local_1331.f_26[iParam0 /*22*/]))
  {
    Stack.Push(iParam0);
    Stack.Push(iParam1);
    Call_Loc(Local_382.f_139.f_2.f_56.f_4);
    TASK::TASK_HANDS_UP(iParam1, func_2509(iParam0), func_2508(iParam0), func_2507(iParam0), func_2506(iParam0));
  }
}