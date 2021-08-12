// fm_content_auto_shop_delivery.ysc @ L152286
void func_2510(int iParam0, int iParam1)
{
  int iVar0;
  struct<4> Var1;
  
  if (!func_2466(iParam1, -1253019028, 1) && func_774(Local_1331.f_26[iParam0 /*22*/]))
  {
    iVar0 = func_2514(iParam0);
    if (iVar0 != -1)
    {
      Var1 = { func_2513(iVar0) };
      TASK::TASK_PATROL(iParam1, &Var1, func_2512(iVar0), func_2511(iVar0), true);
    }
  }
}