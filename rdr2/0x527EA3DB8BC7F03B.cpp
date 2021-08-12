// fishing_core.ysc @ L6962
void func_284(var uParam0, var uParam1, var uParam2, int iParam3)
{
  if ((func_456(uParam0, uParam1, 0, 1) && func_457(uParam1, 0, uParam2->f_327[iParam3], 0)) && (uParam1[0 /*263*/])->f_74 == 0)
  {
    if (!func_285(uParam2->f_163[iParam3], 1227113341))
    {
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uParam2->f_163[iParam3], true);
      TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam3], true, false);
      TASK::TASK_GO_TO_ENTITY(uParam2->f_163[iParam3], func_260(0), -1, 0f, 2f, 0f, 0);
    }
  }
  else if (!func_285(uParam2->f_163[iParam3], 670314910))
  {
    FLOCK::SET_ANIMAL_TUNING_FLOAT_PARAM(uParam2->f_163[iParam3], 68, 4f);
    TASK::CLEAR_PED_TASKS(uParam2->f_163[iParam3], true, false);
    TASK::TASK_WANDER_SWIM(uParam2->f_163[iParam3], 4f);
  }
}