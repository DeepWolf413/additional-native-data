// fm_content_auto_shop_delivery.ysc @ L157424
void func_2803()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < Local_224.f_129)
  {
    if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Local_1252[iVar0 /*4*/])))
    {
      TASK::DELETE_PATROL_ROUTE(&(Local_1252[iVar0 /*4*/]));
    }
    iVar0++;
  }
}