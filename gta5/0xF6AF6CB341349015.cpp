// fm_content_drug_vehicle.ysc @ L24332
void func_568()
{
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1498.f_71[0 /*6*/]) && func_576(NETWORK::NET_TO_VEH(Local_1498.f_71[0 /*6*/])))
  {
    if (func_572())
    {
      if (!PED::IS_PED_IN_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_1498.f_71[0 /*6*/]), false))
      {
        if (!VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_1498.f_71[0 /*6*/]), PLAYER::PLAYER_ID()))
        {
          VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_1498.f_71[0 /*6*/]), PLAYER::PLAYER_ID(), true);
        }
      }
      else if (func_570(NETWORK::NET_TO_VEH(Local_1498.f_71[0 /*6*/]), 1093140480, 1, 1056964608, 0, 1, 0))
      {
        if (!func_569(PLAYER::PLAYER_PED_ID(), 451360105, 1))
        {
          TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_1498.f_71[0 /*6*/]), 0);
        }
      }
    }
    else if (VEHICLE::GET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_1498.f_71[0 /*6*/]), PLAYER::PLAYER_ID()))
    {
      VEHICLE::SET_VEHICLE_DOORS_LOCKED_FOR_PLAYER(NETWORK::NET_TO_VEH(Local_1498.f_71[0 /*6*/]), PLAYER::PLAYER_ID(), false);
    }
  }
}