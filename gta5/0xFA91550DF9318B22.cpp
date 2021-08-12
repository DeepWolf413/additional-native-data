// event_controller.ysc @ L225
void func_3(int iParam0)
{
  struct<39> Var0;
  int iVar39;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 39))
  {
    iVar39 = NETWORK::_0x742B58F723233ED9(Var0.f_38);
    if (iVar39 >= 0 && iVar39 < NETWORK::NETWORK_GET_NUM_PRESENCE_INVITES())
    {
      if (NETWORK::NETWORK_GET_PRESENCE_INVITE_FROM_ADMIN(iVar39) || NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(iVar39))
      {
        if (NETWORK::NETWORK_GET_PRESENCE_INVITE_IS_TOURNAMENT(iVar39))
        {
          func_55(iVar39);
        }
        else
        {
          NETWORK::NETWORK_ACCEPT_PRESENCE_INVITE(iVar39);
        }
        func_54(Var0.f_37, -1);
      }
      else if (func_47())
      {
        func_4(Var0.f_29, Var0, Var0.f_38, Var0.f_16, Var0.f_35, Var0.f_36);
      }
    }
  }
}