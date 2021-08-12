// am_mp_arcade_claw_crane.ysc @ L657
void func_29()
{
  struct<11> Var0;
  
  Var0.f_8 = func_34(Local_270.f_93);
  Var0 = 521268843;
  Var0.f_2 = 1;
  Var0.f_6 = MISC::ABSI(NETWORK::GET_TIME_DIFFERENCE(NETWORK::GET_NETWORK_TIME(), Local_270.f_102));
  if (func_33(PLAYER::PLAYER_ID()))
  {
    Var0.f_9 = 1;
  }
  if (PLAYER::PLAYER_ID() != func_7())
  {
    if (func_32(PLAYER::PLAYER_ID()))
    {
      Var0.f_10 = 589001948;
    }
    else if (func_30(PLAYER::PLAYER_ID()))
    {
      Var0.f_10 = 2003554330;
    }
    else
    {
      Var0.f_10 = 0;
    }
  }
  else
  {
    Var0.f_10 = 0;
  }
  STATS::_0xF9096193DF1F99D4(&Var0);
}