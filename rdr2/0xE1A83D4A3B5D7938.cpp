// rcm_homerob00.ysc @ L9373
void func_312(int iParam0, int iParam1, int iParam2)
{
  if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
  {
    func_757(iParam0);
    func_758(iParam0);
    func_216(512);
    return;
  }
  if (!STREAMING::HAS_MODEL_LOADED(iParam1))
  {
    return;
  }
  *iParam0 = VEHICLE::CREATE_VEHICLE(iParam1, func_720(iParam2), func_759(iParam2), true, true, false, false);
  if (!ENTITY::IS_ENTITY_DEAD(*iParam0))
  {
    VEHICLE::SET_VEHICLE_ON_GROUND_PROPERLY(*iParam0, 0f);
  }
  func_757(iParam0);
  func_758(iParam0);
  VEHICLE::_0xE1A83D4A3B5D7938(*iParam0);
  func_216(512);
}