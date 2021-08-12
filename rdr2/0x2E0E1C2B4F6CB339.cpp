// beat_traffic_attack.ysc @ L3561
bool func_109()
{
  if (PED::IS_PED_IN_ANY_BOAT(Global_35))
  {
    return false;
  }
  if (func_290(1))
  {
    if (func_291())
    {
      return true;
    }
  }
  return false;
}