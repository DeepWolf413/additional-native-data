// freemode.ysc @ L146665
void func_1783()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 5)
  {
    if (MISC::IS_BIT_SET(Global_1590782[iVar0 /*25*/].f_24, 26))
    {
      if (func_1795(Global_1590782[iVar0 /*25*/].f_8))
      {
        if (func_1794(Global_1590782[iVar0 /*25*/].f_8) == 2)
        {
          func_1793(Global_1590782[iVar0 /*25*/].f_2);
          NETSHOPPING::NET_GAMESERVER_SET_TELEMETRY_NONCE_SEED(func_1792(Global_1590782[iVar0 /*25*/].f_8));
          func_1789(Global_1590782[iVar0 /*25*/].f_2, Global_1590782[iVar0 /*25*/].f_4);
          MONEY::NETWORK_RECEIVE_PLAYER_JOBSHARE_CASH(Global_1590782[iVar0 /*25*/].f_2, &(Global_1590782[iVar0 /*25*/].f_10));
          func_1788("PIM_TIGC", Global_1590782[iVar0 /*25*/].f_1, Global_1590782[iVar0 /*25*/].f_2, 0, 0, 0);
          func_1784(Global_1590782[iVar0 /*25*/].f_8);
          MISC::CLEAR_BIT(&(Global_1590782[iVar0 /*25*/].f_24), 26);
        }
        else
        {
          func_1784(Global_1590782[iVar0 /*25*/].f_8);
          MISC::CLEAR_BIT(&(Global_1590782[iVar0 /*25*/].f_24), 26);
        }
      }
    }
    iVar0++;
  }
}