// fishing_core.ysc @ L8037
void func_323(var uParam0, int iParam1)
{
  struct<2> Var0;

  if (iParam1 == 1)
  {
    if (!func_50(uParam0, 32768))
    {
      func_51(uParam0, 32768);
      Var0 = 1;
      Var0.f_1 = joaat("WEAPON_FISHINGROD");
      HUD::_0x8A59D44189AF2BC5(&Var0, -1001145251);
    }
  }
  else if (func_50(uParam0, 32768))
  {
    func_204(uParam0, 32768);
    HUD::_0x160825DADF1B04B3();
  }
}