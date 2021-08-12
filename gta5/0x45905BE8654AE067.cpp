// fm_mission_controller.ysc @ L642419
int func_10580(var* uParam0, float fParam1, var uParam2, int iParam3, float fParam4, float fParam5)
{
  int iVar0;
  struct<3> Var1;
  float fVar4;
  struct<3> Var5;
  struct<3> Var8;
  int iVar11;
  
  iVar0 = 0;
  *uParam2 = 0f;
  Var5 = { 0f, 1f, 0f };
  func_1052(&Var5, 0f, 0f, fParam1);
  Var8 = { *uParam0 + Var5 };
  iVar11 = func_10584(iParam3);
  if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_FAVOUR_DIRECTION(*uParam0, Var8, 0, &Var1, &fVar4, iVar11, 3f, 0))
  {
    if (func_10581(fParam1, fVar4) <= fParam4)
    {
      if (MISC::GET_DISTANCE_BETWEEN_COORDS(Var1, *uParam0, true) < fParam5)
      {
        iVar0 = 1;
        *uParam2 = fVar4;
        *uParam0 = { Var1 };
      }
    }
  }
  return iVar0;
}