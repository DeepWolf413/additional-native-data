// beat_duel_winner.ysc @ L11437
bool func_325(vector3 vParam0)
{
  if (INTERIOR::IS_VALID_INTERIOR(INTERIOR::GET_INTERIOR_AT_COORDS(vParam0)))
  {
    if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
    {
      return true;
    }
  }
  return false;
}