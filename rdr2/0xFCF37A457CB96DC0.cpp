// ambush_exc_road_robbery.ysc @ L11191
bool func_368()
{
  if (Local_274.f_98 < 12.5f || func_141(Local_15[1], Global_36, 1) < 12.5f)
  {
    if ((ENTITY::GET_ENTITY_SPEED(Global_35) < 0.25f || PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(Local_15[1], true, false), 50f)) || PED::IS_PED_HEADING_TOWARDS_POSITION(Global_35, ENTITY::GET_ENTITY_COORDS(Local_15[0], true, false), 50f))
    {
      return true;
    }
  }
  return false;
}