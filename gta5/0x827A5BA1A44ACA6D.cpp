// am_armwrestling.ysc @ L113860
int func_856(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  if (Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_126.f_6[iParam0 /*2*/].f_1 > 0)
  {
    iVar2 = (Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_126.f_6[iParam0 /*2*/].f_1 - Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_126.f_6[iParam0 /*2*/]);
    func_904(49, iVar2, -1);
    func_862(49, 9);
    func_1060(7, 1, -1, 1);
    func_860(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_126.f_6[iParam0 /*2*/].f_1, 0, Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_126.f_6[iParam0 /*2*/].f_1, 0);
    iVar1 = Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_126.f_6[iParam0 /*2*/].f_1;
    Global_1575113 = Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_126.f_6[iParam0 /*2*/];
    if (func_341())
    {
      func_330(-1398318418, iVar1, &iVar0, 0, 0, 0);
      Global_4265506[iVar0 /*85*/].f_14.f_34 = { Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_150 };
    }
    else
    {
      MONEY::NETWORK_EARN_FROM_BETTING(iVar1, &(Global_1590908[PLAYER::PLAYER_ID() /*874*/].f_150));
      func_857(Global_2426865[PLAYER::PLAYER_ID() /*449*/].f_126.f_6[iParam0 /*2*/].f_1, 0);
    }
  }
  return iVar1;
}