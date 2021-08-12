// act_cinema.ysc @ L101625
int func_765(struct<3> Param0)
{
  int iVar0;
  int iVar1;
  
  if (Global_2405077.f_45.f_55)
  {
    if (INTERIOR::IS_VALID_INTERIOR(Global_2405077.f_45.f_56))
    {
      if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(Param0))
      {
        iVar0 = INTERIOR::GET_INTERIOR_AT_COORDS(Param0);
        if (INTERIOR::IS_VALID_INTERIOR(iVar0))
        {
          iVar1 = INTERIOR::GET_INTERIOR_GROUP_ID(iVar0);
          if (!iVar1 == Global_2405077.f_45.f_57)
          {
            return 0;
          }
        }
        else
        {
          return 0;
        }
      }
      else
      {
        return 0;
      }
    }
  }
  return 1;
}