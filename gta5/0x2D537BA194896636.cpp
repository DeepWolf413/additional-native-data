// tennis.ysc @ L17351
void func_364(var uParam0, char* sParam1, float fParam2)
{
  if (!((!PED::IS_PED_INJURED(func_1168(uParam0)) && TASK::IS_TASK_MOVE_NETWORK_ACTIVE(func_1168(uParam0))) && MISC::ARE_STRINGS_EQUAL(TASK::GET_TASK_MOVE_NETWORK_STATE(func_1168(uParam0)), "running")))
  {
    TASK::TASK_MOVE_NETWORK_BY_NAME(func_1168(uParam0), sParam1, fParam2, false, "mini@tennis", 4);
  }
}