// fm_mission_controller_2020.ysc @ L344815
void func_5282(var uParam0)
{
  switch (*uParam0)
  {
    case 35:
      switch (Local_25291.f_11)
      {
        case 6:
          if (ENTITY::HAS_ANIM_EVENT_FIRED(iLocal_22078, -129959263))
          {
            func_4827(Global_4718592.f_5742[uParam0->f_6 /*346*/].f_339);
            if (Local_28286.f_2 > -1)
            {
              func_5283(Local_28286.f_2, 1);
            }
          }
          break;
      }
      break;
    
    case 36:
      if (func_5035(Local_56030[bLocal_22080 /*64*/], 0.5f))
      {
        if (VEHICLE::GET_VEHICLE_DOOR_ANGLE_RATIO(Local_25291.f_943, 5) < 1f)
        {
          VEHICLE::SET_VEHICLE_DOOR_OPEN(Local_25291.f_943, 5, false, false);
          VEHICLE::SET_VEHICLE_DOOR_LATCHED(Local_25291.f_943, 5, false, true, true);
          VEHICLE::SET_CAR_BOOT_OPEN(Local_25291.f_943);
        }
      }
      break;
  }
}