// am_hold_up.ysc @ L1622
int func_35()
{
  if (Local_471.f_50 >= 15 && Local_471.f_50 <= 19)
  {
    if (FIRE::IS_EXPLOSION_IN_SPHERE(9, Local_580, 40f))
    {
      return 1;
    }
  }
  if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_580, Local_583, fLocal_586))
  {
    return 1;
  }
  if (FIRE::IS_EXPLOSION_IN_ANGLED_AREA(-1, Local_587, Local_590, fLocal_593))
  {
    return 1;
  }
  return 0;
}