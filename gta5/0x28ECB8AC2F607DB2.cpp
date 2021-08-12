// am_pi_menu.ysc @ L2090
void func_52()
{
  int iVar0;
  
  if (MISC::IS_BIT_SET(iLocal_1068, false))
  {
    if (iLocal_1069 == 0 || MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), iLocal_1069)) >= 30000)
    {
      iLocal_1069 = NETWORK::GET_NETWORK_TIME();
      if (func_45(PLAYER::PLAYER_ID(), 1))
      {
        iVar0 = func_57(func_59(), func_58());
        STATS::_0x28ECB8AC2F607DB2(func_56(func_58()), func_55(func_58()), func_54(), func_53(), iVar0);
      }
    }
    MISC::CLEAR_BIT(&iLocal_1068, false);
  }
}