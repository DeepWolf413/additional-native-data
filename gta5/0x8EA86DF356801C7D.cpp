// am_casino_peds.ysc @ L292433
void func_3936(int iParam0)
{
  if (func_15(iParam0))
  {
    if (func_1173(ENTITY::GET_ENTITY_MODEL(iParam0), 1))
    {
      VEHICLE::_SET_HYDRAULIC_WHEEL_STATE(iParam0, 4);
    }
  }
}