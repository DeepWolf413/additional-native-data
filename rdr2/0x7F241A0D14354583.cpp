// beat_wagon_threat.ysc @ L10170
void func_244()
{
  func_241();
  switch (iLocal_805)
  {
    case 0:
      if (func_424(-4f, 1, 0, 0))
      {
        if (func_198(uLocal_746[2], Global_35, sLocal_34[1], 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0))
        {
          iLocal_805++;
        }
      }
      break;
    case 1:
      if (func_424(-4f, 1, 0, 0))
      {
        TASK::_TASK_VEHICLE_DRIVE_TO_DESTINATION(uLocal_746[2], iLocal_76, vLocal_18, 3f, 524311, 6, 3f, 5f, 0);
        func_129(&(Local_307[2 /*17*/]), 0);
        func_129(&(Local_307[0 /*17*/]), 0);
        func_129(&(Local_307[1 /*17*/]), 0);
        func_130(&(Local_307[2 /*17*/]), 0, 0);
        func_130(&(Local_307[0 /*17*/]), 1, 0);
        func_130(&(Local_307[1 /*17*/]), 1, 0);
        iLocal_805++;
      }
      break;
  }
}