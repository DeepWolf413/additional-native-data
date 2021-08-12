// business_battles.ysc @ L210111
void func_3153(int iParam0)
{
  if (uLocal_2409.f_9 == 0)
  {
    if (func_3(iParam0, 39))
    {
      if (!func_3(iParam0, 4) && !func_3(iParam0, 3))
      {
        if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(uLocal_2409[iParam0]))
        {
          if (func_1251(uLocal_2409[iParam0]))
          {
            if (!ENTITY::GET_ENTITY_COLLISION_DISABLED(NETWORK::NET_TO_OBJ(uLocal_2409[iParam0])))
            {
              ENTITY::SET_ENTITY_COMPLETELY_DISABLE_COLLISION(NETWORK::NET_TO_OBJ(uLocal_2409[iParam0]), false, false);
            }
            if (func_3154(iParam0))
            {
              func_1519(iParam0, 38);
            }
          }
        }
      }
    }
  }
}