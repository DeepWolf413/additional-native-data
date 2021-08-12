// am_hi_plane_land_cinematic.ysc @ L1404
void func_59(var uParam0)
{
  bool bVar0;
  
  func_58();
  func_66(uParam0);
  bVar0 = uParam0->f_7;
  if (bVar0)
  {
    if (func_65())
    {
      func_64(uParam0, 4);
    }
  }
  if (!CUTSCENE::IS_CUTSCENE_PLAYING() || CUTSCENE::GET_CUTSCENE_TIME() > (CUTSCENE::_0x971D7B15BCDBEF99() - 800))
  {
    if (ENTITY::DOES_ENTITY_EXIST(uParam0->f_24))
    {
      if (!func_61(uParam0->f_24, 0, 0, 0, 0, 0, 1, 0, 1))
      {
        func_60(uParam0->f_24);
      }
    }
    func_64(uParam0, 4);
  }
}