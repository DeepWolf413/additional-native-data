// stripclub.ysc @ L3879
void func_152(int iParam0)
{
  if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 1647992574) != 1 && TASK::DOES_SCENARIO_EXIST_IN_AREA(ENTITY::GET_ENTITY_COORDS(iParam0, true), 3f, true))
  {
    TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iParam0, ENTITY::GET_ENTITY_COORDS(iParam0, true), 3f, 0);
  }
}