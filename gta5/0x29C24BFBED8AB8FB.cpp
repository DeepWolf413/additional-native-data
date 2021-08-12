// act_cinema.ysc @ L102417
void func_802(var uParam0, bool bParam1)
{
  float fVar0;
  
  if (!bParam1)
  {
    func_804(uParam0, 1, 1, 1, 1, 1);
  }
  else
  {
    func_804(uParam0, 1, 1, 1, 1, 0);
  }
  fVar0 = PATHFIND::_GET_HEIGHTMAP_TOP_Z_FOR_POSITION(*uParam0, uParam0->f_1);
  fVar0 = (fVar0 + 100f);
  if (uParam0->f_2 < fVar0)
  {
    uParam0->f_2 = fVar0;
  }
  func_803(uParam0);
}