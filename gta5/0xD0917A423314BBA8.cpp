// fm_mission_controller.ysc @ L589204
int func_9751(int iParam0)
{
  int iVar0;
  
  if (!MISC::IS_BIT_SET(Global_4456448.f_86088[iParam0 /*187*/].f_16, 11))
  {
    iVar0 = 1;
  }
  else if (((MISC::IS_BIT_SET(Global_4456448.f_86088[iParam0 /*187*/].f_14, 11) && Global_4456448.f_86088[iParam0 /*187*/].f_38 >= 0) && NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_22619.f_834.f_81[Global_4456448.f_86088[iParam0 /*187*/].f_38])) && !VEHICLE::_ARE_BOMB_BAY_DOORS_OPEN(NETWORK::NET_TO_VEH(Local_22619.f_834.f_81[Global_4456448.f_86088[iParam0 /*187*/].f_38])))
  {
    iVar0 = 1;
  }
  return iVar0;
}