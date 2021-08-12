// act_cinema.ysc @ L113213
void func_1049(int iParam0)
{
  bool bVar0;
  
  bVar0 = false;
  if (!func_1058())
  {
    bVar0 = true;
  }
  if (iParam0 != -1)
  {
    if (func_1052(iParam0))
    {
      if (!bVar0)
      {
        NETSHOPPING::_NET_GAMESERVER_BASKET_DELETE();
      }
    }
    else if (!bVar0)
    {
      NETSHOPPING::NET_GAMESERVER_END_SERVICE(Global_4265506[iParam0 /*85*/].f_66);
    }
    func_1050(&(Global_4265506[iParam0 /*85*/]));
  }
}