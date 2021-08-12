// mission_triggerer_a.ysc @ L99206
int func_556(int iParam0, char* sParam1, var uParam2, float fParam3)
{
  struct<3> Var0;
  struct<3> Var3;
  float fVar6;
  int iVar7;
  
  if (TASK::WAYPOINT_RECORDING_GET_COORD(sParam1, *uParam2, &Var0))
  {
    if (!func_40(Global_31724[iParam0 /*23*/][0 /*3*/], Var0, 0.1f, 0))
    {
      fVar6 = func_69(((func_558(0.2f, (TASK::WAYPOINT_RECORDING_GET_SPEED_AT_POINT(sParam1, *uParam2) * fParam3)) * SYSTEM::TIMESTEP()) / MISC::GET_DISTANCE_BETWEEN_COORDS(Global_31724[iParam0 /*23*/][0 /*3*/], Var0, true)), 0f, 1f);
      Var3 = { func_557(Global_31724[iParam0 /*23*/][0 /*3*/], Var0, fVar6) };
    }
    else
    {
      Var3 = { Var0 };
      *uParam2++;
    }
    func_555(iParam0, Var3);
    TASK::WAYPOINT_RECORDING_GET_NUM_POINTS(sParam1, &iVar7);
    if (*uParam2 >= iVar7)
    {
      *uParam2 = (*uParam2 - 1);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return 0;
}