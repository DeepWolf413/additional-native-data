// fm_mission_controller.ysc @ L675125
void func_11157()
{
  int iVar0;
  
  if (Global_4456448.f_594[Local_31280[bLocal_3288 /*292*/].f_1 /*16832*/].f_14807 > -1 && Global_4456448.f_594[Local_31280[bLocal_3288 /*292*/].f_1 /*16832*/].f_14807 <= Local_28024[Local_31280[bLocal_3288 /*292*/].f_1])
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Global_2426865[bLocal_3284 /*449*/].f_40))
    {
      iVar0 = NETWORK::NET_TO_VEH(Global_2426865[bLocal_3284 /*449*/].f_40);
      if (ENTITY::DOES_ENTITY_EXIST(iVar0))
      {
        if (func_237(iVar0, 1, 1, 0, 0, 0, 1, 0, 1))
        {
          if (NETWORK::NETWORK_HAS_CONTROL_OF_NETWORK_ID(Global_2426865[bLocal_3284 /*449*/].f_40))
          {
            VEHICLE::SET_VEHICLE_DOORS_SHUT(iVar0, true);
            VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_ALL_PLAYERS(iVar0, true);
            VEHICLE::SET_VEHICLE_UNDRIVEABLE(iVar0, true);
          }
          else
          {
            NETWORK::NETWORK_REQUEST_CONTROL_OF_NETWORK_ID(Global_2426865[bLocal_3284 /*449*/].f_40);
          }
        }
      }
    }
  }
}