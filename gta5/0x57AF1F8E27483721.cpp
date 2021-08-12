// fm_race_creator.ysc @ L439065
void func_6917(int iParam0)
{
  struct<3> Var0;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 8))
  {
    if (!NETWORK::NETWORK_IS_PLAYER_BLOCKED_BY_ME(Var0.f_1))
    {
      if (func_48(Var0.f_1, 0, 1))
      {
        func_6918(Var0.f_1, &(Var0.f_2), PLAYER::GET_PLAYER_NAME(Var0.f_1), 1, -99);
      }
    }
  }
}