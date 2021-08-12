// armadillo.ysc @ L680
void func_14(int iParam0)
{
  iParam0 = iParam0;
  func_49(-278659788, 1);
  func_49(-59369632, 1);
  if (func_50(75, 16777216))
  {
    TASK::SET_SCENARIO_GROUP_ENABLED("ARM_DEAD_BODIES_MED", true);
  }
  if (func_50(83, 16777216) && func_51(83) >= 2)
  {
    TASK::SET_SCENARIO_GROUP_ENABLED("ARM_DEAD_BODIES_HIGH", true);
  }
}