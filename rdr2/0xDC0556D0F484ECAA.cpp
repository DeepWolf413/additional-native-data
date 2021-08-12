// rcm_homerob00.ysc @ L15525
void func_489(int* iParam0, bool bParam1)
{
  if (ENTITY::IS_ENTITY_DEAD(*iParam0))
  {
    return;
  }
  if (bParam1)
  {
    VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 10);
  }
  VEHICLE::_0xDC0556D0F484ECAA(*iParam0);
  func_490(iParam0);
}