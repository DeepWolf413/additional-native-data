// pb_prostitute.ysc @ L17988
int func_499()
{
  if (PED::IS_PED_USING_SCENARIO(iLocal_96, func_65(0)))
  {
    if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_96, "amb@world_human_prostitute@crackhooker@base", "base"))
    {
      return 0;
    }
    if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_96, "amb@world_human_prostitute@cokehead@base", "base"))
    {
      return 1;
    }
  }
  if (PED::IS_PED_USING_SCENARIO(iLocal_96, func_65(1)))
  {
    if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_96, "amb@world_human_prostitute@french@base", "base"))
    {
      return 3;
    }
    if (PED::IS_SCRIPTED_SCENARIO_PED_USING_CONDITIONAL_ANIM(iLocal_96, "amb@world_human_prostitute@hooker@base", "base"))
    {
      return 2;
    }
  }
  return -1;
}