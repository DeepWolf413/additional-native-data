// ambush_exc_bridge_trap.ysc @ L12477
int func_460(int iParam0)
{
  vector3 vVar0;

  vVar0 = { func_461(iParam0) };
  if (MISC::GET_DISTANCE_BETWEEN_COORDS(Global_36, vVar0, false) > 6f)
  {
    if (ENTITY::WOULD_ENTITY_BE_OCCLUDED(func_261(iParam0), vVar0, false))
    {
      return 1;
    }
  }
  return 0;
}