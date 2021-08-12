// am_mp_arena_box.ysc @ L107629
int func_1176(int iParam0, bool bParam1)
{
  int iVar0;
  
  iVar0 = 0;
  switch (iParam0)
  {
    case 0:
      iVar0 = Global_262145.f_26136;
      break;
    
    case 1:
      iVar0 = Global_262145.f_26137;
      break;
    
    case 2:
      iVar0 = Global_262145.f_26138;
      break;
    
    case 3:
      iVar0 = Global_262145.f_26139;
      break;
  }
  if (bParam1)
  {
    if (!MONEY::NETWORK_CAN_SPEND_MONEY(iVar0, false, true, false, -1, 0))
    {
      iVar0 = MONEY::NETWORK_GET_VC_BALANCE();
    }
  }
  return iVar0;
}