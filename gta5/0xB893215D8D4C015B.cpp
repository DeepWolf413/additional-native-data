// am_airstrike.ysc @ L2012
int func_65()
{
  if ((!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_242.f_2.f_3) && func_90(Local_242.f_2.f_3.f_1)) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_242.f_2))
  {
    if (func_42(Local_242.f_2))
    {
      if (func_67(&(Local_242.f_2.f_3), Local_242.f_2, 22, Local_242.f_2.f_3.f_1, -1, 1, 1, 1))
      {
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(NETWORK::NET_TO_PED(Local_242.f_2.f_3), true);
        PED::SET_PED_RELATIONSHIP_GROUP_HASH(NETWORK::NET_TO_PED(Local_242.f_2.f_3), Global_1575021);
        PED::SET_PED_RANDOM_COMPONENT_VARIATION(NETWORK::NET_TO_PED(Local_242.f_2.f_3), 0);
        PED::SET_PED_KEEP_TASK(NETWORK::NET_TO_PED(Local_242.f_2.f_3), true);
        func_66();
        TASK::TASK_PERFORM_SEQUENCE(NETWORK::NET_TO_PED(Local_242.f_2.f_3), iLocal_48);
        VEHICLE::SET_TASK_VEHICLE_GOTO_PLANE_MIN_HEIGHT_ABOVE_TERRAIN(NETWORK::NET_TO_VEH(Local_242.f_2), SYSTEM::ROUND(50f));
      }
    }
  }
  if (!NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_242.f_2.f_3))
  {
    return 0;
  }
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(Local_242.f_2.f_3.f_1);
  return 1;
}