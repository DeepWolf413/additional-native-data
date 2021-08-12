// act_cinema.ysc @ L101258
int func_752(struct<3> Param0, var uParam3, var uParam4)
{
  struct<3> Var0;
  int iVar3;
  var uVar4;
  var uVar5;
  
  iVar3 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID_WITH_HEADING(Param0, 1, &uVar5, &uVar4, 1, 3f, 0f);
  if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar3))
  {
    PATHFIND::GET_VEHICLE_NODE_POSITION(iVar3, &Var0);
    *uParam3 = SYSTEM::VDIST(Param0.x, Param0.f_1, 0f, Var0.x, Var0.f_1, 0f);
    *uParam4 = MISC::ABSF((Param0.f_2 - Var0.f_2));
    return 1;
  }
  return 0;
}