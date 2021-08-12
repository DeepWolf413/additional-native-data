// coachrobberies.ysc @ L11604
bool func_346(var uParam0)
{
  if (!func_10(2))
  {
    return false;
  }
  if ((FIRE::IS_EXPLOSION_IN_SPHERE(25, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 3f) || VEHICLE::_IS_VEHICLE_DOOR_BROKEN(uParam0->f_1, 0)) || VEHICLE::_IS_VEHICLE_DOOR_BROKEN(uParam0->f_1, 2))
  {
    VEHICLE::SET_VEHICLE_DOORS_LOCKED(uParam0->f_1, 1);
    VEHICLE::SET_VEHICLE_DOOR_BROKEN(uParam0->f_1, 0, false);
    VEHICLE::SET_VEHICLE_DOOR_BROKEN(uParam0->f_1, 2, false);
    uParam0->f_627 = 0;
    func_72(256);
    if (FIRE::IS_EXPLOSION_IN_SPHERE(25, ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 3f))
    {
      FIRE::ADD_EXPLOSION(ENTITY::GET_ENTITY_COORDS(uParam0->f_1, true, false), 25, 1f, true, false, 1f);
      func_564(uParam0->f_1);
    }
    return true;
  }
  return false;
}