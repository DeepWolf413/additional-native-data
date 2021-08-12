// fm_race_creator.ysc @ L435157
void func_6708(int iParam0)
{
  struct<8> Var0;
  int iVar8;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 8))
  {
    if ((((func_2349(Var0.f_5) && func_6549(Var0.f_6, Var0.f_7)) && func_6710(Var0.f_1)) && func_2277(PLAYER::PLAYER_ID(), Var0.f_1)) && func_7471())
    {
      if (Var0.f_2 > 0)
      {
        func_2289(19);
        if (func_933())
        {
          func_1631(569170531, Var0.f_2, &iVar8, 0, 0, 0);
          Global_4265506[iVar8 /*85*/].f_6 = func_2235(func_2287());
          Global_4265506[iVar8 /*85*/].f_7 = func_2234(func_2287());
        }
        else
        {
          MONEY::_NETWORK_EARN_GOON(func_2235(func_2287()), func_2234(func_2287()), Var0.f_2);
          if (Var0.f_4 == 1)
          {
            func_6709("GB_BCUT_TICK0", Var0.f_1, Var0.f_2, 0, 0, 1);
          }
        }
      }
    }
  }
}