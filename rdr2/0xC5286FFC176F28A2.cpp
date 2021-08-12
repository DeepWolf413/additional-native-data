// abigail2_1.ysc @ L80355
float func_2367(int iParam0)
{
  if (TASK::IS_PED_SPRINTING(iParam0))
  {
    return 1f;
  }
  if (TASK::IS_PED_RUNNING(iParam0))
  {
    return 0.9f;
  }
  if (TASK::IS_PED_WALKING(iParam0))
  {
    return 0.8f;
  }
  return 0.7f;
}