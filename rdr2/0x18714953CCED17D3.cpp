// braithwaites2.ysc @ L52175
bool func_1247(var uParam0)
{
  if (func_33(uParam0) <= iLocal_92)
  {
    if (ENTITY::DOES_ENTITY_EXIST(Local_14.f_19[0]) && !CAM::_0x139EFB0A71DD9011())
    {
      if (!VEHICLE::IS_VEHICLE_DRIVEABLE(Local_14.f_19[0], false, false))
      {
        return true;
      }
      if (VEHICLE::_0x18714953CCED17D3(Local_14.f_19[0]))
      {
        return true;
      }
    }
  }
  return false;
}