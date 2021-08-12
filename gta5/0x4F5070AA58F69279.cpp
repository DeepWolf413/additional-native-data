// act_cinema.ysc @ L102612
int func_810(struct<3> Param0)
{
  int iVar0;
  
  iVar0 = PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE_ID(Param0, 1, 1, 3f, 0f);
  if (PATHFIND::IS_VEHICLE_NODE_ID_VALID(iVar0))
  {
    if (PATHFIND::GET_VEHICLE_NODE_IS_SWITCHED_OFF(iVar0))
    {
      return 1;
    }
  }
  return 0;
}