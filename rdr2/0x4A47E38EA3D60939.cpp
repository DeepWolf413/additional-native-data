// short_update.ysc @ L62452
void func_2046(int iParam0, bool bParam1)
{
  struct<2> Var0;
  float fVar2;

  if (!func_2039(iParam0))
  {
    return;
  }
  if (WEAPON::_0x705BE297EEBDB95D(iParam0) || func_3251(iParam0))
  {
    Var0 = { func_1627(joaat("SKILL"), WEAPON::_0x8EC44AE8DECFF841(iParam0)) };
    if (0 != Var0 || 0 != Var0.f_1)
    {
      fVar2 = 1f;
      if (bParam1)
      {
        fVar2 = 1.5f;
      }
      STATS::_STAT_ID_INCREMENT_FLOAT(&Var0, fVar2);
    }
  }
}