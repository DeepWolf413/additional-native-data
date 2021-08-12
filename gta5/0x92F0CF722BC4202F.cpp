// armenian1.ysc @ L30884
int func_189(struct<3> Param0, float fParam3, bool bParam4)
{
  if (!VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_2775, false))
  {
    func_259(1, 1);
    if (func_257(1, 1))
    {
      if (bParam4)
      {
        return 1;
      }
      else if (func_190(&iLocal_2775, 1, Param0, fParam3, 1, 1))
      {
        VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_2775, 0, false);
        VEHICLE::_SET_VEHICLE_DOOR_CAN_BREAK(iLocal_2775, 1, false);
        VEHICLE::SET_VEHICLE_AUTOMATICALLY_ATTACHES(iLocal_2775, false, 0);
        VEHICLE::SET_VEHICLE_STRONG(iLocal_2775, true);
        VEHICLE::SET_VEHICLE_HAS_STRONG_AXLES(iLocal_2775, true);
        AUDIO::_0x6FDDAD856E36988A(iLocal_2775, true);
        return 1;
      }
    }
  }
  else
  {
    return 1;
  }
  return 0;
}