// am_mp_car_meet_property.ysc @ L369325
void func_5772(var uParam0, var uParam1, bool bParam2)
{
  VEHICLE::_SET_HYDRAULIC_WHEEL_STATE_TRANSITION(PED::GET_VEHICLE_PED_IS_IN(*uParam1, false), 4, 0, 0.7f, 1f);
  VEHICLE::_SET_HYDRAULIC_WHEEL_STATE_TRANSITION(PED::GET_VEHICLE_PED_IS_IN(*uParam1, false), 5, 0, 0.7f, 1f);
  if (iParam2 >= 0 && iParam2 < 32)
  {
    MISC::SET_BIT(&(uParam0->f_80.f_4), iParam2);
  }
}