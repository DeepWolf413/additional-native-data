// business_battles.ysc @ L187516
int func_2268()
{
  if ((uLocal_2409.f_1051 != -1 && NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uLocal_2409.f_98[uLocal_2409.f_1051 /*15*/])) && !func_2269(uLocal_2409.f_98[uLocal_2409.f_1051 /*15*/]))
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uLocal_2409.f_1142))
    {
      if (!ENTITY::IS_ENTITY_ATTACHED_TO_ENTITY(NETWORK::NET_TO_ENT(uLocal_2409.f_1142), NETWORK::NET_TO_ENT(uLocal_2409.f_98[uLocal_2409.f_1051 /*15*/])))
      {
        if (func_1251(uLocal_2409.f_98[uLocal_2409.f_1051 /*15*/]) && func_1251(uLocal_2409.f_1142))
        {
          OBJECT::ATTACH_PORTABLE_PICKUP_TO_PED(NETWORK::NET_TO_OBJ(uLocal_2409.f_1142), NETWORK::NET_TO_PED(uLocal_2409.f_98[uLocal_2409.f_1051 /*15*/]));
          return 1;
        }
      }
      else
      {
        return 1;
      }
    }
  }
  return 0;
}