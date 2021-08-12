// act_cinema.ysc @ L119167
void func_1212(int iParam0)
{
  struct<3> Var0;
  int iVar3;
  int iVar4;
  bool bVar5;
  
  if (SCRIPT::GET_EVENT_DATA(1, iParam0, &Var0, 3))
  {
    if (func_36(Var0.f_1, 1, 1))
    {
      iVar3 = PLAYER::GET_PLAYER_PED(Var0.f_1);
      if (ENTITY::DOES_ENTITY_EXIST(iVar3))
      {
        if (PED::IS_PED_IN_ANY_VEHICLE(iVar3, false))
        {
          iVar4 = PED::GET_VEHICLE_PED_IS_IN(iVar3, false);
          if (VEHICLE::IS_VEHICLE_WINDOW_INTACT(iVar4, Var0.f_2) && NETWORK::NETWORK_GET_THIS_SCRIPT_IS_NETWORK_SCRIPT())
          {
            if (func_101(iVar4, &bVar5))
            {
              VEHICLE::REMOVE_VEHICLE_WINDOW(iVar4, Var0.f_2);
            }
            if (bVar5)
            {
              ENTITY::SET_VEHICLE_AS_NO_LONGER_NEEDED(&iVar4);
            }
          }
        }
      }
    }
  }
}