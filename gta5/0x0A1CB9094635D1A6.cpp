// am_casino_limo.ysc @ L16389
int func_320()
{
  if (!func_623(8))
  {
    if (func_375() && func_374())
    {
      func_364(&Local_1027, func_373(), func_372(), func_371(), func_370(), func_369(), func_368(), func_367(), func_366(), func_365(), 0, 2);
      func_362(&Local_1027, func_363());
      MISC::CLEAR_AREA_OF_PROJECTILES(func_371(), 25f, 0);
      func_140(8);
    }
  }
  else
  {
    if (Local_1027.f_386)
    {
      func_323(&Local_1027, 0, 1);
    }
    if (!Local_1027.f_386)
    {
      func_322();
      func_321(&Local_1462);
      return 1;
    }
  }
  return 0;
}