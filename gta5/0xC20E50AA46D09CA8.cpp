// am_mp_arcade.ysc @ L354308
int func_5814()
{
  if (!func_4985())
  {
    return 0;
  }
  func_4982();
  if ((MISC::IS_BIT_SET(Local_807, 4) && Local_1826.f_34 != -1) && Local_1826.f_34 < 10)
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_1826.f_55[Local_1826.f_34]))
    {
      if (((!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()) && VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_1826.f_55[Local_1826.f_34]), false)) && !NETWORK::NETWORK_IS_ENTITY_FADING(NETWORK::NET_TO_VEH(Local_1826.f_55[Local_1826.f_34]))) && VEHICLE::IS_VEHICLE_ON_ALL_WHEELS(NETWORK::NET_TO_VEH(Local_1826.f_55[Local_1826.f_34])))
      {
        if (func_5815(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_1826.f_55[Local_1826.f_34]), 0))
        {
          NETWORK::NETWORK_FADE_IN_ENTITY(PLAYER::PLAYER_PED_ID(), true, 0);
          return 1;
        }
        else if (TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 1 && TASK::GET_SCRIPT_TASK_STATUS(PLAYER::PLAYER_PED_ID(), -1794415470) != 0)
        {
          TASK::TASK_ENTER_VEHICLE(PLAYER::PLAYER_PED_ID(), NETWORK::NET_TO_VEH(Local_1826.f_55[Local_1826.f_34]), 20000, Global_1683957, 2f, 16, 0);
        }
      }
    }
  }
  return 0;
}