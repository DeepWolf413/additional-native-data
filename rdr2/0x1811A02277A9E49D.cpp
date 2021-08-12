// emeraldranch.ysc @ L5044
bool func_149(bool bParam0)
{
  if (func_20() == 0)
  {
    return false;
  }
  if (!func_143(94))
  {
    return false;
  }
  if ((func_141(92) || func_140(92)) || func_142(92))
  {
    return false;
  }
  if (func_247(2) && !bParam0)
  {
    return false;
  }
  if (bParam0 && ((((CAM::_0x1811A02277A9E49D() || !PED::IS_PED_IN_ANY_VEHICLE(Global_35, false)) || PED::IS_PED_IN_ANY_TAXI(Global_35)) || PED::_GET_SEAT_PED_IS_USING(Global_35) != -1) || !func_152(ENTITY::GET_ENTITY_MODEL(PED::GET_VEHICLE_PED_IS_IN(Global_35, false)))))
  {
    return false;
  }
  return true;
}