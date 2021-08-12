// marston7.ysc @ L54198
void func_1330(int iParam0)
{
  if (ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    if (func_1852(iParam0) || !func_1853(iParam0))
    {
      VEHICLE::SET_VEHICLE_FIXED(iParam0);
    }
  }
}