// ambient_load.ysc @ L485
void func_18(struct<16> Param0, var uParam16, bool bParam17, bool bParam18)
{
  struct<18> Var0;

  if (!SCRIPTS::_0x179A6F0EE2E79026(&uParam16))
  {
    return;
  }
  Param0 = 0;
  Param0.f_1 = PLAYER::PLAYER_ID();
  Param0.f_2 = NETWORK::GET_NETWORK_TIME_ACCURATE();
  if (!bParam17)
  {
    if (Param0.f_15)
    {
      if (bParam18)
      {
        Var0.f_12 = 255;
        Var0.f_13 = 255;
        Var0.f_17 = -1;
        Var0 = { Param0 };
        Var0.f_16 = uParam16;
        Var0.f_17 = Param0.f_2;
        func_45(&(Global_1058888.f_43200), Var0);
        return;
      }
    }
  }
  SCRIPTS::TRIGGER_SCRIPT_EVENT(1, &Param0, 16, 4, &uParam16);
}