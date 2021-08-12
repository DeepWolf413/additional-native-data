// benchmark.ysc @ L3936
bool func_118(var uParam0)
{
  bool bVar0;

  bVar0 = true;
  if (func_247())
  {
    bVar0 = false;
  }
  if (!CAM::IS_SCREEN_FADED_OUT())
  {
    bVar0 = false;
  }
  if (bVar0)
  {
    if (!func_248(uParam0))
    {
    }
    func_249(uParam0, MISC::_GET_BENCHMARK_ITERATIONS_FROM_COMMAND_LINE());
    func_250(uParam0, MISC::_GET_BENCHMARK_PASS_FROM_COMMAND_LINE());
    if (func_125(uParam0) < -1 || func_125(uParam0) >= 20)
    {
      func_250(uParam0, -1);
    }
    func_251(uParam0);
  }
  return bVar0;
}