// am_armwrestling.ysc @ L127306
void func_1355(bool bParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  
  if (iParam1 == -1)
  {
    iParam1 = func_101();
  }
  switch (iParam0)
  {
    case 0:
      STATS::_0x723C1CE13FBFDB67(0, iParam1);
      break;
    
    default:
      iVar1 = func_1113(iParam1);
      iVar0 = MISC::GET_PROFILE_SETTING(iVar1);
      if (!MISC::IS_BIT_SET(iVar0, iParam0))
      {
        MISC::SET_BIT(&iVar0, bParam0);
        STATS::_0x723C1CE13FBFDB67(iVar0, iParam1);
      }
      break;
  }
}