// fm_mission_controller_2020.ysc @ L317644
void func_4438(bool bParam0)
{
  struct<3> Var0;
  float fVar3;
  
  Var0 = { func_3973(bParam0) };
  fVar3 = Global_4718592.f_160726[bParam0 /*98*/].f_7;
  if (Global_4718592.f_160726[bParam0 /*98*/].f_9 == 0 || Global_4718592.f_160726[bParam0 /*98*/].f_9 == 2)
  {
    if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Global_4718592.f_160726[bParam0 /*98*/][1 /*3*/], false) > fVar3)
    {
      fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Global_4718592.f_160726[bParam0 /*98*/][1 /*3*/], false);
    }
    else
    {
      fVar3 = MISC::GET_DISTANCE_BETWEEN_COORDS(Var0, Global_4718592.f_160726[bParam0 /*98*/][0 /*3*/], false);
    }
  }
  MISC::GET_GROUND_Z_FOR_3D_COORD(Var0, &(Var0.f_2), false, false);
  MISC::CLEAR_AREA_LEAVE_VEHICLE_HEALTH(Var0, fVar3, true, false, false, false);
}