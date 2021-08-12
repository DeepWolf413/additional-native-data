// am_mp_property_int.ysc @ L226864
void func_2326(int iParam0)
{
  if ((ENTITY::DOES_ENTITY_EXIST(iParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(iParam0, false)) && VEHICLE::GET_NUM_MOD_KITS(iParam0) != 0)
  {
    if (!Global_262145.f_12866 && Global_262145.f_2330 == 0)
    {
      switch (VEHICLE::GET_VEHICLE_MOD_IDENTIFIER_HASH(iParam0, 14, VEHICLE::GET_VEHICLE_MOD(iParam0, 14)))
      {
        case 55862314:
        case 400002352:
        case 560832604:
        case -2138224118:
        case 897484282:
        case 314232747:
          VEHICLE::REMOVE_VEHICLE_MOD(iParam0, 14);
          break;
        }
      }
  }
}