// beat_duel_boaster.ysc @ L12210
void func_378(struct<7> Param0, vector3 vParam7)
{
  if (!func_52(Param0))
  {
    return;
  }
  if (func_457(vParam7, 0f, 0f, 0f, 1056964608 /* Float: 0.5f */, 1))
  {
    return;
  }
  if (!VOLUME::_DOES_VOLUME_EXIST(Param0))
  {
    return;
  }
  if (MAP::DOES_BLIP_EXIST(Param0.f_5))
  {
    MAP::SET_BLIP_COORDS(Param0.f_5, vParam7);
  }
  VOLUME::_SET_VOLUME_COORDS(Param0, vParam7);
}