// ob_jukebox.ysc @ L5488
void func_105(int iParam0)
{
  int iVar0;
  int iVar1;
  
  if (func_5(iLocal_130, -1))
  {
    iVar0 = MISC::GET_HASH_KEY(func_120(iParam0));
  }
  else if (iLocal_130 == 126)
  {
    iVar0 = MISC::GET_HASH_KEY(func_119(iParam0));
  }
  if (MONEY::NETWORK_CAN_SPEND_MONEY(1, false, false, true, -1, 0))
  {
    if (func_118())
    {
      func_106(1976384368, 1, &iVar1, 0, 0, 1);
      Global_4265506[iVar1 /*85*/] = iVar0;
    }
    else
    {
      MONEY::_NETWORK_SPENT_JUKEBOX(1, iVar0, 0, 0);
    }
  }
}