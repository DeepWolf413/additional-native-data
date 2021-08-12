// am_mp_arcade_claw_crane.ysc @ L84724
int func_639(int iParam0)
{
  if (!func_598(iParam0))
  {
    return 0;
  }
  if (!ENTITY::DOES_ENTITY_HAVE_PHYSICS(iParam0))
  {
    return 0;
  }
  if (!ENTITY::DOES_ENTITY_HAVE_DRAWABLE(iParam0))
  {
    return 0;
  }
  return 1;
}