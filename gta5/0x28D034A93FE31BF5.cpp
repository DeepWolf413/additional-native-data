// fm_content_auto_shop_delivery.ysc @ L3569
void func_153(int iParam0, int iParam1)
{
  switch (iParam1)
  {
    case joaat("phantom2"):
    case joaat("dune5"):
      VEHICLE::_SET_VEHICLE_RECEIVES_RAMP_DAMAGE(iParam0, false);
      break;
  }
  func_154(iParam0);
}