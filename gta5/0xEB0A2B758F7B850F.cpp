// am_mp_submarine.ysc @ L449581
void func_6937(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
  int iVar0;
  struct<5> Var1;
  int iVar18;
  int iVar19;
  int iVar20;
  
  iVar0 = FILES::_GET_SHOP_PED_APPAREL_VARIANT_PROP_COUNT(iParam0);
  if ((iVar0 > 0 && iParam1 < iVar0) && iParam1 > -1)
  {
    iVar18 = 0;
    iVar19 = 0;
    iVar20 = 0;
    FILES::_GET_VARIANT_PROP(iParam0, iParam1, &iVar18, &iVar19, &iVar20);
    if (iVar18 != 0 && iVar18 != joaat("0"))
    {
      FILES::INIT_SHOP_PED_PROP(&Var1);
      FILES::GET_SHOP_PED_PROP(iVar18, &Var1);
      *iParam4 = iVar18;
      *iParam2 = Var1.f_3;
      *iParam3 = Var1.f_4;
      *iParam5 = func_494(PLAYER::PLAYER_PED_ID(), Var1.f_3, Var1.f_4, 0);
      return;
    }
  }
}