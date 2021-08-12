// act_cinema.ysc @ L105392
struct<6> func_863(int iParam0, int iParam1)
{
  struct<6> Var0;
  bool bVar6;
  int iVar23;
  
  iVar23 = 0;
  if (func_864(iParam1, &bVar6))
  {
    iVar23 = 1;
  }
  if (iVar23 && MISC::_GET_BASE_ELEMENT_METADATA(&Var0, &(Var0.f_3), iParam0, bVar6))
  {
    return Var0;
  }
  return Var0;
}