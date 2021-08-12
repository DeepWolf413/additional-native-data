// am_mp_yacht.ysc @ L116844
void func_880()
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 < 40)
  {
    if (PATHFIND::DOES_NAVMESH_BLOCKING_OBJECT_EXIST(iLocal_1848[iVar0]))
    {
      PATHFIND::REMOVE_NAVMESH_BLOCKING_OBJECT(iLocal_1848[iVar0]);
    }
    iVar0++;
  }
  if (bLocal_1889)
  {
    bLocal_1889 = false;
  }
}