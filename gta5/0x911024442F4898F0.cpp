// fm_deathmatch_controler.ysc @ L530008
void func_9251(int iParam0, var uParam1)
{
  struct<4> Var0;
  int iVar4;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 4))
  {
    if (Var0 == -1889948350)
    {
      iVar4 = NETWORK::NET_TO_OBJ((*uParam1)[Var0.f_2]);
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iVar4))
      {
        ENTITY::FREEZE_ENTITY_POSITION(iVar4, false);
      }
      if (Var0.f_3)
      {
      }
      OBJECT::_SET_ENABLE_ARENA_PROP_PHYSICS(iVar4, Var0.f_3, 0);
      if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
      {
      }
    }
  }
}