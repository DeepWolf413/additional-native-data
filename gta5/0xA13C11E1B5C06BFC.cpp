// freemode.ysc @ L664203
void func_9407()
{
  int iVar0;
  struct<8> Var1;
  
  iVar0 = 0;
  while (iVar0 <= 1)
  {
    if ((((((((Global_2464912[iVar0] != 0 && !func_497()) && func_17216(PLAYER::PLAYER_ID(), 1, 1)) && !NETWORK::NETWORK_IS_IN_MP_CUTSCENE()) && CAM::IS_GAMEPLAY_CAM_RENDERING()) && !func_574()) && func_19946(115, -1)) && func_9412()) && !func_9409())
    {
      func_19544(&Global_2464694);
      HUD::THEFEED_FORCE_RENDER_ON();
      StringCopy(&Var1, "~HUD_COLOUR_SOCIAL_CLUB~", 64);
      StringConCat(&Var1, HUD::_GET_LABEL_TEXT("CREATOR_RSC"), 64);
      func_9408("PIM_TIGC22", &Var1, Global_2464912[iVar0], iVar0 + 1, 0, 1);
      Global_2464912[iVar0] = 0;
      Global_2464696 = 1;
    }
    if (Global_2464696)
    {
      if (func_118(&Global_2464694, 10000, 0))
      {
        HUD::THEFEED_FORCE_RENDER_OFF();
        Global_2464696 = 0;
      }
    }
    iVar0++;
  }
}