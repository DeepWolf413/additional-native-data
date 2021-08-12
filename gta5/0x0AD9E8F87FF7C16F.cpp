// dreyfuss1.ysc @ L43336
void func_424()
{
  if (!func_437(Local_86.f_35[0]))
  {
    STREAMING::REQUEST_MODEL(iLocal_163);
    while (!STREAMING::HAS_MODEL_LOADED(iLocal_163))
    {
      SYSTEM::WAIT(0);
    }
    Local_86.f_35[0] = VEHICLE::CREATE_VEHICLE(iLocal_163, Local_82, fLocal_85, true, true, false);
    STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(iLocal_163);
  }
  if (func_437(Local_86.f_35[0]))
  {
    VEHICLE::_0x0AD9E8F87FF7C16F(Local_86.f_35[0], false);
    VEHICLE::SET_VEHICLE_COLOUR_COMBINATION(Local_86.f_35[0], 1);
    VEHICLE::SET_VEHICLE_NUMBER_PLATE_TEXT(Local_86.f_35[0], "DR3YFU55");
  }
}