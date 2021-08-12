// camp_beaverhollow.ysc @ L7237
bool func_251()
{
  if (HUD::IS_HUD_HIDDEN())
  {
    return false;
  }
  if (CAM::IS_CINEMATIC_CAM_RENDERING())
  {
    return false;
  }
  if (func_624())
  {
    return false;
  }
  if (func_233(joaat("CSTAG_EVENT_HSO_PARTY_NIGHT"), 1))
  {
    return false;
  }
  if (func_233(joaat("CSTAG_EVENT_SDB_PARTY_NIGHT"), 1))
  {
    return false;
  }
  return true;
}