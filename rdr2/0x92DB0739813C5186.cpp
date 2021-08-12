// act_caunc_rustling.ysc @ L11078
void func_228()
{
  if (!PED::IS_PED_ON_MOUNT(iLocal_22))
  {
    if ((!func_259(iLocal_22, 1868526510) && !ENTITY::IS_ENTITY_DEAD(iLocal_22)) && !ENTITY::IS_ENTITY_DEAD(iLocal_23))
    {
      TASK::TASK_MOUNT_ANIMAL(iLocal_22, iLocal_23, 30000, -1, 1f, 1, 0, 0);
      Local_1520.f_3 = Global_35;
      Local_1520.f_7 = 40000;
      Local_1520.f_20 = 4;
      Local_1520.f_19 = 4;
      Local_1520.f_17 = 0;
      Local_1520.f_18 = 0;
      _NAMESPACE29::_0x66F9EB44342BB4C5(iLocal_22, &Local_1520);
    }
    else if (ENTITY::IS_ENTITY_DEAD(iLocal_23))
    {
      func_595(4, 1, 1, 0, 0, 0, 0, 0);
      iLocal_23 = func_596(4, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0);
      if (ENTITY::DOES_ENTITY_EXIST(iLocal_23))
      {
        PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(iLocal_23, true);
      }
    }
  }
  else if (!func_259(iLocal_22, 713668775) && !ENTITY::IS_ENTITY_AT_COORD(iLocal_22, vLocal_932, 3f, 4f, 4f, false, true, 0))
  {
    TASK::TASK_FOLLOW_NAV_MESH_TO_COORD(iLocal_22, vLocal_932, 0.55f, 20000, 0.25f, 0, 40000f);
  }
}