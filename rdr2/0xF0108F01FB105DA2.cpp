// beat_savage_wagon.ysc @ L201
void func_4()
{
  if (ENTITY::DOES_ENTITY_EXIST(iLocal_341))
  {
    if (iLocal_337 < 2 && (!func_22(16) || func_23(&uLocal_379, 20f)))
    {
      func_24(&iLocal_341, 0);
      func_25(&(uLocal_342[0]));
      func_25(&(uLocal_342[1]));
    }
    else
    {
      if (!func_22(128))
      {
        vLocal_370 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iLocal_341, -7.5f, 18f, 0f) };
        func_26(&vLocal_370, 50, 10, 0);
        TASK::_TASK_VEHICLE_DRIVE_TO_COORD_2(iLocal_341, vLocal_370, 10f, 0, 524308, 2f, 50f);
      }
      VEHICLE::_0xC399CC89FBA05DA0(iLocal_341, 1);
      func_24(&iLocal_341, 1);
      func_27(56, 1, 0, 30, 2, 0, 0, 1);
    }
  }
  func_28(Local_143.f_51, 20f, 6);
  func_29(&Local_143, &uLocal_342, &uLocal_347, iLocal_353, -1, 0, 0, 1, 0, 1);
  SCRIPTS::TERMINATE_THIS_THREAD();
}