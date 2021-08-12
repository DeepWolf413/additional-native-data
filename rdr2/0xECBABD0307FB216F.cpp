// benchmark.ysc @ L4677
void func_132(var uParam0)
{
  if (func_108(uParam0) != 2)
  {
    if (!func_311(func_310(uParam0)))
    {
      if (CAM::IS_SCREEN_FADED_IN())
      {
        func_313(uParam0, func_312("BMARK_EXIT", 10000, 0, 0, 0, 1));
      }
    }
    else if (func_314(1000))
    {
      func_129(uParam0);
      if (func_37(uParam0, 4))
      {
        MISC::_SAVE_BENCHMARK_RECORDING();
      }
      func_1(uParam0, 1);
      MISC::_RESET_BENCHMARK_RECORDING();
    }
  }
}