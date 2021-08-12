// fm_mission_controller.ysc @ L751070
void func_12768(bool bParam0)
{
  int iVar0;
  
  if (!MISC::IS_BIT_SET(Global_4718592.f_70989[bParam0 /*392*/].f_107, 10))
  {
    return;
  }
  if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_22619.f_834.f_81[bParam0]))
  {
    iVar0 = NETWORK::NET_TO_VEH(Local_22619.f_834.f_81[bParam0]);
    if (!VEHICLE::IS_VEHICLE_ALARM_ACTIVATED(iVar0))
    {
      if (PED::GET_VEHICLE_PED_IS_ENTERING(PLAYER::PLAYER_PED_ID()) == iVar0 && ENTITY::IS_ENTITY_TOUCHING_ENTITY(PLAYER::PLAYER_PED_ID(), iVar0))
      {
        VEHICLE::SET_VEHICLE_ALARM(iVar0, true);
        VEHICLE::START_VEHICLE_ALARM(iVar0);
      }
    }
  }
}