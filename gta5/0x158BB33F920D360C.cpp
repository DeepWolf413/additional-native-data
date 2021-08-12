// am_destroy_veh.ysc @ L5690
void func_207()
{
  if (Local_77.f_12 == 2)
  {
    if (NETWORK::NETWORK_DOES_ENTITY_EXIST_WITH_NETWORK_ID(Local_77.f_2))
    {
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(NETWORK::NET_TO_VEH(Local_77.f_2), false))
      {
        TASK::OPEN_SEQUENCE_TASK(&iLocal_224);
        TASK::TASK_VEHICLE_DRIVE_TO_COORD_LONGRANGE(0, NETWORK::NET_TO_VEH(Local_77.f_2), Local_77.f_20, 7f, iLocal_227, 3f);
        TASK::TASK_LEAVE_ANY_VEHICLE(0, 0, 0);
        TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(0, Local_77.f_24, 1f, -1, 0.25f, false, Local_77.f_27);
        TASK::CLOSE_SEQUENCE_TASK(iLocal_224);
      }
    }
  }
}