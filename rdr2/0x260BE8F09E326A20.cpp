// beat_outlaw_transport.ysc @ L5857
void func_143()
{
  if (!bLocal_894)
  {
    if (!func_36(uLocal_801[4], 0, 1))
    {
      if (VEHICLE::IS_VEHICLE_DRIVEABLE(iLocal_818, false, false) && !VEHICLE::IS_VEHICLE_STOPPED(iLocal_818))
      {
        VEHICLE::BRING_VEHICLE_TO_HALT(iLocal_818, 5f, 1, false);
        bLocal_894 = true;
      }
    }
  }
}