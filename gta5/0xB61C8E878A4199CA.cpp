// act_cinema.ysc @ L99820
int func_730(struct<3> Param0, var* uParam3, int iParam4, int iParam5, bool bParam6)
{
  if (func_733(Param0, uParam3))
  {
    if (func_731(Param0, uParam3, iParam5, bParam6))
    {
      return 1;
    }
  }
  if (PATHFIND::GET_SAFE_COORD_FOR_PED(Param0, false, uParam3, iParam4))
  {
    if (func_731(Param0, uParam3, iParam5, bParam6))
    {
      return 1;
    }
  }
  return 0;
}