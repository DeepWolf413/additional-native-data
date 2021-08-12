// fmmc_launcher.ysc @ L336325
void func_4937(int* iParam0, bool bParam1)
{
  int iVar0;
  
  iVar0 = func_4938(func_4940(PLAYER::PLAYER_ID()), 0);
  NETWORK::NETWORK_SEND_TRANSITION_GAMER_INSTRUCTION(iParam0, "", 7, iVar0, bParam1);
  Global_2453903.f_1.f_845[0 /*57*/].f_46 = iVar0;
}