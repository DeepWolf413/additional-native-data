// launcher_triathlon.ysc @ L3520
void func_45()
{
  int iVar0;
  
  if (bLocal_131)
  {
    iVar0 = 0;
    while (iVar0 < iLocal_136)
    {
      if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_136[iVar0]))
      {
        PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_136[iVar0]);
      }
      iVar0++;
    }
    TASK::RESET_EXCLUSIVE_SCENARIO_GROUP();
  }
}