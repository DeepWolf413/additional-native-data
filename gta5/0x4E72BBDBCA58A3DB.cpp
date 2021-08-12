// am_rollercoaster.ysc @ L7260
void func_207(int iParam0, var uParam1)
{
  struct<6> Var0;
  
  Var0 = -1667961677;
  Var0.f_1 = PLAYER::PLAYER_ID();
  Var0.f_2 = Global_2551619;
  Var0.f_3 = Global_2551620;
  Var0.f_4 = AUDIO::GET_STREAM_PLAY_TIME();
  Var0.f_5 = uParam1;
  if (!iParam0 == 0)
  {
    SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
  }
}