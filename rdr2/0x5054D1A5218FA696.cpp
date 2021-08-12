// bounty_poster.ysc @ L7070
bool func_265(vector3 vParam0)
{
  int iVar0;

  if (!INTERIOR::IS_COLLISION_MARKED_OUTSIDE(vParam0))
  {
    iVar0 = INTERIOR::GET_INTERIOR_FROM_COLLISION(vParam0);
    if (INTERIOR::IS_VALID_INTERIOR(iVar0))
    {
      return true;
    }
  }
  return false;
}