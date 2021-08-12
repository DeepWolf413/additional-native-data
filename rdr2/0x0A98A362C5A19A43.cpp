// beat_locked_safe.ysc @ L5247
bool func_169()
{
  if (func_148(Local_118.f_51, 1) > 80f)
  {
    return true;
  }
  if ((func_34(32) && func_34(256)) && func_116(uLocal_447[1], Local_118.f_51, 1) > 30f)
  {
    return true;
  }
  if (!func_59(&uLocal_765))
  {
    if (!(func_87(uLocal_447[0], 0, 1) || func_87(uLocal_447[1], 0, 1)) || func_34(512))
    {
      if ((TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_730) && TASK::_0x0A98A362C5A19A43(iLocal_730) == 0) && !PED::_IS_PED_USING_SCENARIO_POINT(Global_35, iLocal_730))
      {
        func_38(&uLocal_765);
      }
    }
  }
  else
  {
    if (TASK::_0x0A98A362C5A19A43(iLocal_730) != 0)
    {
      func_60(&uLocal_765);
    }
    if (func_138(&uLocal_765, 5f))
    {
      return true;
    }
  }
  return false;
}