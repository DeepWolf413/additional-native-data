// agency_heist1.ysc @ L103845
int func_591(struct<3> Param0, char* sParam3, struct<3> Param4)
{
  int iVar0;
  int iVar1;
  
  if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
  {
    iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS_WITH_TYPE(Param4, sParam3);
    if (!INTERIOR::IS_VALID_INTERIOR(iVar0))
    {
      return 0;
    }
    iVar1 = INTERIOR::GET_INTERIOR_FROM_COLLISION(Param0);
    if (iVar1 == iVar0)
    {
      return 1;
    }
  }
  return 0;
}