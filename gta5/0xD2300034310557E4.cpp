// arena_carmod.ysc @ L10758
void func_150(int iParam0)
{
  if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 0))
  {
    GRAPHICS::REMOVE_VEHICLE_CREW_EMBLEM(iParam0, 0);
  }
  if (GRAPHICS::DOES_VEHICLE_HAVE_CREW_EMBLEM(iParam0, 1))
  {
    GRAPHICS::REMOVE_VEHICLE_CREW_EMBLEM(iParam0, 1);
  }
}