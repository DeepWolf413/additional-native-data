// pb_prostitute.ysc @ L2939
void func_64(bool bParam0)
{
  struct<3> Var0;
  
  if (((TASK::PED_HAS_USE_SCENARIO_TASK(iLocal_96) || TASK::IS_PED_ACTIVE_IN_SCENARIO(iLocal_96)) || PED::IS_PED_USING_SCENARIO(iLocal_96, func_65(0))) || PED::IS_PED_USING_SCENARIO(iLocal_96, func_65(1)))
  {
    return;
  }
  Var0 = { ENTITY::GET_ENTITY_COORDS(iLocal_96, true) };
  if (!TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var0, func_65(0), 20f, true) && !TASK::DOES_SCENARIO_OF_TYPE_EXIST_IN_AREA(Var0, func_65(1), 20f, true))
  {
    if (bParam0)
    {
      TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
    }
    else
    {
      TASK::TASK_WANDER_STANDARD(iLocal_96, 40000f, 0);
    }
    return;
  }
  if (!bParam0)
  {
    TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(iLocal_96, Var0, 20f, 0);
  }
  else
  {
    TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD(0, Var0, 20f, 0);
  }
}