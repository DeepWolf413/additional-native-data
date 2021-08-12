// gb_ploughed.ysc @ L1217
int func_47(int iParam0)
{
  struct<3> Var0;
  struct<3> Var3;
  int iVar6;
  
  if (!NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_931.f_49[iParam0]))
  {
    iVar6 = func_46();
    if (func_51(iVar6))
    {
      Var0 = { func_50(iParam0) };
      Var3 = { func_49(iParam0) };
      if (func_48(&(Local_931.f_49[iParam0]), iVar6, Var0, 1, 1, 0, 1, 0, 0, 0))
      {
        MISC::CLEAR_AREA(Var0, 1f, false, false, false, false);
        ENTITY::SET_ENTITY_COORDS_NO_OFFSET(NETWORK::NET_TO_ENT(Local_931.f_49[iParam0]), Var0, false, false, true);
        ENTITY::SET_ENTITY_ROTATION(NETWORK::NET_TO_ENT(Local_931.f_49[iParam0]), Var3, 2, true);
        ENTITY::SET_ENTITY_HEALTH(NETWORK::NET_TO_ENT(Local_931.f_49[iParam0]), 1000, 0);
        ENTITY::_0xB17BC6453F6CF5AC(NETWORK::NET_TO_ENT(Local_931.f_49[iParam0]), NETWORK::NET_TO_ENT(Local_931.f_17));
        PHYSICS::SET_DISABLE_FRAG_DAMAGE(NETWORK::NET_TO_ENT(Local_931.f_49[iParam0]), true);
        PHYSICS::SET_DISABLE_BREAKING(NETWORK::NET_TO_ENT(Local_931.f_49[iParam0]), true);
        ENTITY::FREEZE_ENTITY_POSITION(NETWORK::NET_TO_ENT(Local_931.f_49[iParam0]), true);
      }
    }
  }
  else
  {
    return 1;
  }
  return 0;
}