// maintransition.ysc @ L336836
void func_4344(int iParam0)
{
  struct<85> Var0;
  int iVar85;
  
  Var0.f_66 = 2147483647;
  iVar85 = 0;
  while (iVar85 < 15)
  {
    Global_4265506[iVar85 /*85*/] = { Var0 };
    iVar85++;
  }
  if (func_658() && iParam0 == 1)
  {
    if (NETSHOPPING::NET_GAMESERVER_BASKET_END())
    {
      NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
    }
  }
}