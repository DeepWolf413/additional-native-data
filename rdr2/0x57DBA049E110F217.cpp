// startup.ysc @ L9214
void func_326(int iParam0)
{
  struct<8> Var0;
  struct<7> Var17;
  bool bVar24;

  if (!SCRIPTS::GET_EVENT_DATA(1, iParam0, &Var0, 17))
  {
    return;
  }
  Var17 = { func_379(PLAYER::PLAYER_ID()) };
  bVar24 = NETWORK::NETWORK_ARE_HANDLES_THE_SAME(&Var0, &Var17);
  if (func_262(Var0.f_16, 8) && bVar24)
  {
    return;
  }
  func_411(&Var0);
  Global_1572887.f_164.f_83 = Var0.f_15;
  Global_1572887.f_164.f_65 = { Var0 };
  Global_1572887.f_164.f_72 = { Var0.f_7 };
  if (Global_1572887.f_164.f_83 > 2 && !func_327())
  {
    Global_1572887.f_164.f_83 = 0;
  }
  else if (Global_1572887.f_164.f_83 == 2 && bVar24)
  {
    Global_1572887.f_164.f_83 = 0;
  }
}