// taxi_clowncar.ysc @ L8515
int func_290(var uParam0)
{
  int iVar0;
  
  if (VEHICLE::IS_VEHICLE_DRIVEABLE(uParam0->f_4, false))
  {
    iVar0 = PLAYER::GET_TIME_SINCE_PLAYER_DROVE_ON_PAVEMENT(PLAYER::PLAYER_ID());
    if (iVar0 == 0)
    {
      if (!func_17(&(Local_190[4 /*10*/].f_3)))
      {
        func_193(&(Local_190[4 /*10*/].f_3));
      }
      else if (func_107(&(Local_190[4 /*10*/].f_3)) > 2f)
      {
        func_106(&(Local_190[4 /*10*/].f_3));
        return 1;
      }
    }
    else
    {
      func_106(&(Local_190[4 /*10*/].f_3));
    }
  }
  return 0;
}