// fm_race_creator.ysc @ L449492
int func_7340(bool bParam0)
{
  struct<13> Var0;
  
  if (!MISC::IS_DURANGO_VERSION())
  {
    return 0;
  }
  Var0 = { func_178(bParam0) };
  if (NETWORK::NETWORK_HAS_VIEW_GAMER_USER_CONTENT_RESULT(&Var0))
  {
    return 0;
  }
  return 1;
}