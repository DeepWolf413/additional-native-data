// am_mp_yacht.ysc @ L116863
void func_881()
{
  int iVar0;
  struct<3> Var1;
  
  iVar0 = 0;
  while (iVar0 < 40)
  {
    if (func_1070(iVar0) && func_1082(PLAYER::PLAYER_ID(), iVar0, 1000f))
    {
      if (!PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_1848[iVar0]))
      {
        Var1 = { func_87(iVar0) };
        Var1.f_2 = -100f;
        iLocal_1848[iVar0] = PATHFIND::ADD_NAVMESH_BLOCKING_OBJECT(Var1, 500f, 500f, 200f, func_882(func_109(iVar0)), false, 7);
      }
    }
    else if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_1848[iVar0]))
    {
      PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_1848[iVar0]);
    }
    iVar0++;
  }
}