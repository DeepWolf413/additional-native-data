// agency_heist3b.ysc @ L4789
void func_40()
{
  int iVar0;
  
  func_42(1);
  iVar0 = 0;
  while (iVar0 < Local_3943)
  {
    if (Local_3943[iVar0 /*6*/].f_3 != joaat("v_ilev_fib_sprklr") && !func_41(Local_3943[iVar0 /*6*/]))
    {
      if (OBJECT::DOES_OBJECT_OF_TYPE_EXIST_AT_COORDS(Local_3943[iVar0 /*6*/], 0.25f, Local_3943[iVar0 /*6*/].f_3, false))
      {
        ENTITY::REMOVE_MODEL_SWAP(Local_3943[iVar0 /*6*/], 0.25f, joaat("v_ilev_fib_sprklr"), Local_3943[iVar0 /*6*/].f_3, false);
      }
    }
    Local_3943[iVar0 /*6*/].f_3 = joaat("v_ilev_fib_sprklr");
    iVar0++;
  }
}