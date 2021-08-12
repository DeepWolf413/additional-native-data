// am_mp_arcade.ysc @ L353953
int func_5805(int iParam0)
{
  if (!INTERIOR::IS_VALID_INTERIOR(iParam0))
  {
    return 0;
  }
  if (INTERIOR::IS_INTERIOR_DISABLED(iParam0))
  {
    INTERIOR::DISABLE_INTERIOR(iParam0, false);
  }
  if (INTERIOR::IS_INTERIOR_CAPPED(iParam0))
  {
    INTERIOR::CAP_INTERIOR(iParam0, false);
  }
  INTERIOR::PIN_INTERIOR_IN_MEMORY(iParam0);
  return 1;
}