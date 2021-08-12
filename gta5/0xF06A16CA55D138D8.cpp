// fm_mission_controller.ysc @ L763207
void func_13026()
{
  int iVar0;
  int iVar1;
  
  if (!MISC::IS_BIT_SET(bLocal_14854, false))
  {
    if (Local_19406.f_243 > 0 && Local_19406.f_243 <= 32)
    {
      iVar0 = 0;
      while (iVar0 <= (Local_19406.f_243 - 1))
      {
        if (NETWORK::NETWORK_DOES_NETWORK_ID_EXIST(Local_22619.f_834.f_81[iVar0]))
        {
          iVar1 = NETWORK::NET_TO_VEH(Local_22619.f_834.f_81[iVar0]);
          if (VEHICLE::IS_VEHICLE_DRIVEABLE(iVar1, false))
          {
            if (MISC::IS_BIT_SET(Global_4718592.f_70989[iVar0 /*392*/].f_104, 3))
            {
              if (VEHICLE::_GET_CAN_VEHICLE_JUMP(iVar1))
              {
                VEHICLE::_SET_USE_HIGHER_VEHICLE_JUMP_FORCE(iVar1, true);
              }
            }
          }
        }
        iVar0++;
      }
      MISC::SET_BIT(&bLocal_14854, false);
    }
  }
}