// epsilon6.ysc @ L36262
int func_266()
{
  if (func_239())
  {
    if (MISC::IS_PROJECTILE_TYPE_WITHIN_DISTANCE(ENTITY::GET_ENTITY_COORDS(Local_156.x, false), joaat("weapon_stickybomb"), 10f, false))
    {
      func_521("Sticky bomb in range of plane");
      return 1;
    }
  }
  return 0;
}