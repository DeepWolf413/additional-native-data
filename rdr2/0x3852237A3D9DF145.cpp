// mudtown5.ysc @ L34731
int func_737(char[4] cParam0)
{
  func_1220(cParam0);
  func_1208(cParam0, &(uLocal_621[2]), &(Local_629[2 /*41*/]));
  func_1209(cParam0, &(uLocal_621[0]), &(Local_629[0 /*41*/]));
  func_1210(cParam0, &(uLocal_621[1]), &(Local_629[1 /*41*/]));
  func_1211(cParam0);
  LAW::_0x3852237A3D9DF145(0);
  if (CLOCK::GET_CLOCK_HOURS() >= 12)
  {
    CLOCK::PAUSE_CLOCK(true, 0);
  }
  if (TASK::IS_WAYPOINT_PLAYBACK_GOING_ON_FOR_PED(uLocal_621[2], 0))
  {
    if (TASK::GET_PED_WAYPOINT_PROGRESS(uLocal_621[2]) > 287 && iLocal_3090 == 0)
    {
      iLocal_3090 = 1;
    }
  }
  switch (func_1213(cParam0))
  {
    case 0:
      if (func_1214(Global_35, func_365(11, 10), func_365(11, 8)))
      {
        func_134(cParam0, 29);
      }
      break;
    case 29:
      return 1;
  }
  return 0;
}