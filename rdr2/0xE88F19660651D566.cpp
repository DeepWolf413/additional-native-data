// ambush_exc_wagon_turret.ysc @ L8772
bool func_279(int iParam0)
{
  vector3 vVar0;

  vVar0 = { ENTITY::GET_ENTITY_COORDS(Local_15[iParam0], false, false) };
  if (!func_61(Local_15[iParam0], 0, 1))
  {
    return false;
  }
  else if (func_404(&Local_15, iParam0))
  {
    return true;
  }
  if (!ENTITY::IS_ENTITY_OCCLUDED(Local_15[iParam0]))
  {
    if (ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY_IN_FRONT(Global_35, Local_15[iParam0], 17))
    {
      return false;
    }
    if (func_405(Global_35, Local_15[iParam0], 5f, 0))
    {
      return false;
    }
  }
  if (!func_404(&Local_15, iParam0) && ENTITY::WOULD_ENTITY_BE_OCCLUDED(func_251(&Local_274, iParam0), vVar0, false))
  {
    func_129(&Local_15, iParam0, 1);
    return true;
  }
  return false;
}