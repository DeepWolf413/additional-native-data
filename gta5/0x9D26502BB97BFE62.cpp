// am_contact_requests.ysc @ L64962
void func_1040()
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  if (MISC::IS_BIT_SET(iLocal_1303, 2))
  {
    if (Local_151.f_181.f_70[Local_151.f_181.f_69] > 3)
    {
      func_980();
      return;
    }
  }
  iVar0 = func_1043(Local_151.f_181.f_70[Local_151.f_181.f_69]);
  iVar1 = func_1042(iVar0);
  if (func_90())
  {
    func_78(-517447402, iVar1, &iVar2, 1, 1, 0);
  }
  else
  {
    MONEY::NETWORK_SPENT_REQUEST_HEIST(iVar1, false, false);
  }
  func_1041(iVar0);
  func_72(&(Global_2453903.f_4315.f_212[50 /*2*/]), 1, 0);
  func_940(50, -1, -1);
  func_32(4);
  MISC::CLEAR_BIT(&(Local_151.f_359), 4);
}