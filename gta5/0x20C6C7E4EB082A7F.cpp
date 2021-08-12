// maintransition.ysc @ L1268
void func_1(bool bParam0)
{
  if (bParam0)
  {
    if (Global_2464663 == 0)
    {
      STREAMING::PREFETCH_SRL("GTAO_INTRO_MALE");
      STREAMING::_0x20C6C7E4EB082A7F(true);
      Global_2464663 = 1;
    }
  }
  else if (Global_2464663 == 1)
  {
    if (STREAMING::IS_SRL_LOADED())
    {
      STREAMING::END_SRL();
    }
    Global_2464663 = 0;
  }
}