// am_pass_the_parcel.ysc @ L5541
void func_135()
{
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_104.f_16))
  {
    if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_104.f_16), false))
    {
      if (func_137(PLAYER::PLAYER_ID()) || func_5(PLAYER::PLAYER_ID()))
      {
        VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(NETWORK::NET_TO_VEH(Local_104.f_16), false);
        if (func_136(0, 0))
        {
          TASK::TASK_LEAVE_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_104.f_16), 0);
        }
      }
      else
      {
        VEHICLE::SET_VEHICLE_IS_CONSIDERED_BY_PLAYER(NETWORK::NET_TO_VEH(Local_104.f_16), true);
      }
    }
  }
}