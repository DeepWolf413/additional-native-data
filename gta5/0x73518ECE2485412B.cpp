// fm_mission_controller_2020.ysc @ L371226
void func_5841(int iParam0, int iParam1)
{
  PED::SET_PED_CAN_LEG_IK(iLocal_22078, false);
  func_5059(ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, 0f, 0f, -2f), 1, 0);
  if (!NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
  {
    NETWORK::NETWORK_REQUEST_CONTROL_OF_ENTITY(iParam0);
  }
  if (bLocal_22081)
  {
    if (((TASK::GET_SCRIPT_TASK_STATUS(iLocal_22078, 242628503) == 7 || func_18(&iLocal_9979, 10000, 0)) || MISC::IS_BIT_SET(Local_26818.f_12, 6)) || func_5842(iParam0, Local_26818.f_27, func_5846(iParam1)))
    {
      if (NETWORK::NETWORK_HAS_CONTROL_OF_ENTITY(iParam0))
      {
        func_5(&iLocal_9979, 0, 0);
        func_5049(iLocal_22078);
        func_5844(2);
      }
    }
  }
}