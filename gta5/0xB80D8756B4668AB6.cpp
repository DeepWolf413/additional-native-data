// am_casino_peds.ysc @ L215885
int func_2054(var uParam0)
{
  if (!MISC::IS_STRING_NULL_OR_EMPTY(uParam0->f_231))
  {
    STREAMING::REQUEST_NAMED_PTFX_ASSET(uParam0->f_231);
    if (!STREAMING::HAS_NAMED_PTFX_ASSET_LOADED(uParam0->f_231))
    {
      return 0;
    }
  }
  return 1;
}