// act_cinema.ysc @ L25157
void func_218(char* sParam0, int iParam1, int iParam2, int iParam3)
{
  int iVar0;
  int iVar1;
  struct<8> Var2;
  
  iVar0 = (iParam2 - iParam3);
  iVar1 = FILES::GET_NUM_TATTOO_SHOP_DLC_ITEMS(iParam1);
  if (iVar1 > 0 && iVar0 < iVar1)
  {
    if (FILES::GET_TATTOO_SHOP_DLC_ITEM_DATA(iParam1, iVar0, &Var2))
    {
      if (!FILES::IS_CONTENT_ITEM_LOCKED(Var2))
      {
        sParam0->f_11 = iParam2;
        MemCopy(sParam0, {Var2.f_7}, 4);
        sParam0->f_5 = Var2.f_3;
        sParam0->f_4 = Var2.f_2;
        sParam0->f_8 = Var2.f_6;
        sParam0->f_6 = iParam1;
        sParam0->f_7 = Var2.f_4;
        sParam0->f_9 = (iParam2 / 32);
        sParam0->f_10 = (iParam2 % 32);
        sParam0->f_12 = Var2.f_5;
      }
    }
  }
}