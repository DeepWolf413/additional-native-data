// fm_bj_race_controler.ysc @ L157306
int func_1815(var uParam0, int iParam1, int iParam2, bool bParam3)
{
  if ((func_363(uParam0->f_571, 0) == joaat("ruiner2") && func_1786(iParam1, bParam3)) && (ENTITY::DOES_ENTITY_EXIST(iParam2) && !ENTITY::IS_ENTITY_DEAD(iParam2, false)))
  {
    if (VEHICLE::_GET_VEHICLE_HAS_PARACHUTE(iParam2))
    {
      if (VEHICLE::_0x3DE51E9C80B116CF(iParam2))
      {
        return 1;
      }
    }
  }
  return 0;
}