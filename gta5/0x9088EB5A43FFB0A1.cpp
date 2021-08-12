// nigel1.ysc @ L34880
int func_233(int* iParam0, struct<3> Param1, float fParam4, int iParam5, int iParam6)
{
  STREAMING::REQUEST_MODEL(iLocal_83);
  if (iParam6 == 1)
  {
    while (!STREAMING::HAS_MODEL_LOADED(iLocal_83))
    {
      SYSTEM::WAIT(0);
    }
  }
  else if (!STREAMING::HAS_MODEL_LOADED(iLocal_83))
  {
    return 0;
  }
  func_234(iParam0, iLocal_83, Param1, fParam4);
  if (func_309(*iParam0))
  {
    VEHICLE::SET_VEHICLE_COLOURS(*iParam0, 65, 0);
    VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(*iParam0, 5, false);
    VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(*iParam0, "28BNT310");
    VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT_INDEX(*iParam0, 0);
    if (iParam5 == 1)
    {
      VEHICLE::SET_VEHICLE_DOORS_LOCKED(*iParam0, 10);
    }
  }
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_83);
  return 1;
}