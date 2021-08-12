// assassin_construction.ysc @ L18079
void func_354()
{
  if (!iLocal_1744)
  {
    if (func_34(Local_1944, 1) <= 100f)
    {
      STREAMING::PREFETCH_SRL("ass_construction");
      iLocal_1744 = 1;
    }
  }
  else if (func_34(Local_1944, 1) > 120f)
  {
    if (STREAMING::IS_SRL_LOADED())
    {
      STREAMING::END_SRL();
      iLocal_1744 = 0;
    }
  }
}