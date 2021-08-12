// beat_arms_deal.ysc @ L9481
bool func_279(int iParam0)
{
  int iVar0;

  if (ENTITY::IS_ENTITY_DEAD(*iParam0))
  {
    return false;
  }
  if (PED::IS_PED_IN_VEHICLE(Global_35, *iParam0, false))
  {
    return true;
  }
  if (AITRANSPORT::_0x619E63980BFC0096(Global_35, *iParam0, 0))
  {
    iVar0 = PED::GET_SEAT_PED_IS_TRYING_TO_ENTER(Global_35);
    switch (iVar0)
    {
      case -1:
        return true;
      case 0:
        return true;
      default:
        break;
    }
  }
  else
  {
    return PED::IS_PED_ON_SPECIFIC_VEHICLE(Global_35, *iParam0);
  }
  return false;
}