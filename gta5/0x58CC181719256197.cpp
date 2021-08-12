// freemode.ysc @ L711947
int func_10390(var uParam0)
{
  struct<13> Var0[1];
  int iVar14;
  
  if (!Global_2550920.f_56)
  {
    Global_2550920.f_57 = 0;
    Var0[0 /*13*/] = { *uParam0 };
    Global_2550920.f_58 = NETWORK::NETWORK_DISPLAYNAMES_FROM_HANDLES_START(&Var0, 1);
    Global_2550920.f_56 = 1;
    return 0;
  }
  else if (!Global_2550920.f_57)
  {
    iVar14 = NETWORK::NETWORK_GET_DISPLAYNAMES_FROM_HANDLES(Global_2550920.f_58, &(Global_2550920.f_39), 1);
    if (iVar14 == 0)
    {
    }
    else if (iVar14 == -1)
    {
      Global_2550920.f_39[0 /*16*/] = { Global_2550920.f_4 };
    }
    else
    {
      return 0;
    }
  }
  Global_2550920.f_57 = 1;
  return 1;
}