// business_battles_defend.ysc @ L297313
void func_5117()
{
  if (!func_5118() && !func_440(25))
  {
    return;
  }
  switch (Local_143.f_3)
  {
    case 3:
      if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_143.f_636[0]))
      {
        PED::SET_PED_VEHICLE_FORCED_SEAT_USAGE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_143.f_636[0]), 0, 1, -2);
        func_5687(25);
      }
      break;
  }
}