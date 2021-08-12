// coachrobberies.ysc @ L18889
bool func_547(var uParam0)
{
  vector3 vVar0;

  vVar0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(uParam0->f_25[0 /*679*/].f_1, 0f, 15f, 0f) };
  if (VEHICLE::_0xF5EA41C1408695FB((vVar0.x - 15f), (vVar0.y - 15f), (vVar0.x + 15f), (vVar0.y + 15f)))
  {
    return true;
  }
  return false;
}