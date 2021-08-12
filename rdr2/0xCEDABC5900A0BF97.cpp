// ambush_odr_bridge_ambush.ysc @ L8329
bool func_299()
{
  if (ENTITY::GET_ENTITY_SPEED(Global_35) < 7f)
  {
    return false;
  }
  if (PED::IS_PED_FALLING(Global_35))
  {
    return false;
  }
  if (PED::IS_PED_JUMPING(Global_35))
  {
    return false;
  }
  return true;
}