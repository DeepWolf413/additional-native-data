// act_hunting_2.ysc @ L22009
bool func_607(var uParam0)
{
  switch (Local_15.f_13)
  {
    case 0:
      if (!Local_15.f_273[0] && TASK::IS_PED_STILL(Local_15.f_307[0]))
      {
        func_574(0, 1, 1);
        TASK::TASK_DISMOUNT_ANIMAL(0, 262144, 0, 0, 0, 0);
        TASK::TASK_STAND_STILL(0, -1);
        func_576(0, 1, 0, 0, 1);
        if (!Local_15.f_641)
        {
          AUDIO::TRIGGER_MUSIC_EVENT("HUNT02_ARRIVE");
          Local_15.f_641 = 1;
        }
      }
      if (func_563(Global_35, Local_15.f_307[0], 1, 1) < 25f && !func_583(Local_15.f_307[0], Local_15.f_307[1], 0))
      {
        func_940(2, 1);
      }
      break;
    case 2:
      return true;
  }
  return false;
}