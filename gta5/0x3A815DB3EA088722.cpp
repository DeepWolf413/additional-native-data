// launcher_yoga.ysc @ L1339
void func_37()
{
  if (iLocal_119 == 1)
  {
    if (TASK::IS_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER"))
    {
      TASK::SET_SCENARIO_TYPE_ENABLED("WORLD_MOUNTAIN_LION_WANDER", false);
      PED::SET_PED_MODEL_IS_SUPPRESSED(joaat("a_c_mtlion"), true);
    }
  }
}