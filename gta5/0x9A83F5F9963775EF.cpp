// am_casino_peds.ysc @ L334104
int func_4702(var uParam0)
{
  if (!func_4703(&(uParam0->f_1)))
  {
    return 0;
  }
  if (ENTITY::DOES_ENTITY_EXIST(*uParam0) && VEHICLE::IS_VEHICLE_DRIVEABLE(*uParam0, false))
  {
    if (!VEHICLE::HAVE_VEHICLE_MODS_STREAMED_IN(*uParam0))
    {
      return 0;
    }
  }
  return 1;
}