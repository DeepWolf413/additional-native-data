// am_mp_arc_cab_manager.ysc @ L99810
void func_1077()
{
  int iVar0;
  struct<4> Var1;
  int iVar5;
  
  if (MONEY::NETWORK_CAN_SPEND_MONEY(1, false, true, false, -1, 0))
  {
    iVar0 = func_535(PLAYER::PLAYER_ID());
    Var1 = { func_660(iVar0, 0, 1) };
    if (func_1089())
    {
      Global_4265506[iVar5 /*85*/] = MISC::GET_HASH_KEY(&Var1);
      func_1078(1868043300, 1, &iVar5, 0, 1, 0);
    }
    else
    {
      MONEY::_NETWORK_SPENT_ARCADE_GAME(1, 0, 1, MISC::GET_HASH_KEY(&Var1), 2);
    }
    HUD::_0x170F541E1CADD1DE(false);
    HUD::HIDE_HUD_COMPONENT_THIS_FRAME(13);
    func_1145(5);
  }
  else
  {
    func_1145(11);
  }
}