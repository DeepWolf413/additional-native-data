// am_ferriswheel.ysc @ L7523
void func_169(int iParam0)
{
  struct<2> Var0;
  int iVar2;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 2))
  {
    iVar2 = PLAYER::GET_PLAYER_PED(Var0.f_1);
    if (func_13(Var0.f_1, 1, 1))
    {
      NETWORK::_NETWORK_ALLOW_LOCAL_ENTITY_ATTACHMENT(iVar2, true);
      ENTITY::DETACH_ENTITY(iVar2, false, true);
    }
  }
}