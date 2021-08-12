// fm_content_auto_shop_delivery.ysc @ L30700
void func_883(int iParam0, int iParam1, bool bParam2)
{
  if (!func_823())
  {
    return;
  }
  if (!func_6(iParam0, 32) && !func_530(iParam0, iLocal_1274, 24))
  {
    if (func_892(iParam0))
    {
      if (func_774(Local_1331.f_2[iParam0]))
      {
        NETWORK::_NETWORK_SET_ENTITY_INVISIBLE_TO_NETWORK(iParam1, false);
        NETWORK::SET_NETWORK_ID_EXISTS_ON_ALL_MACHINES(Local_1331.f_2[iParam0], true);
        OBJECT::_0xAA059C615DE9DD03(NETWORK::NET_TO_OBJ(Local_1331.f_2[iParam0]), true);
        func_890(256, 0, 0);
        func_765(iParam0, 24);
      }
    }
  }
  else
  {
    func_884(iParam1, &(Local_1192[iParam0 /*7*/].f_5), func_889(iParam0), iParam0);
  }
  if (bParam2)
  {
    func_819(bParam2, iParam0);
  }
}