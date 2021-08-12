// ambush_sav_corner.ysc @ L3522
bool func_141()
{
  if (VOLUME::_IS_POSITION_INSIDE_VOLUME(Local_274.f_15[0], Global_36))
  {
    return true;
  }
  if (func_294(&Local_15, &(Local_15.f_152), &(Local_15.f_180), &(Local_274.f_67), 0, 3, 1))
  {
    return true;
  }
  if (ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(Local_274.f_61[0], Global_35, 1, 1))
  {
    return true;
  }
  if (!ANIMSCENE::_0x3AB6C7B0BB0DF4B1(Local_15[0], Local_274.f_63[0]) && ENTITY::_0x3EC28DA1FFAC9DDD(Local_15[0], Global_35, 1, 1))
  {
    return true;
  }
  return false;
}