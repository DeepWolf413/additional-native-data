// mob1.ysc @ L77922
bool func_1943(int iParam0, int iParam1, var uParam2, vector3 vParam3)
{
  if (func_905(Global_35, iParam0, 40f, 1))
  {
    if (!ENTITY::DOES_ENTITY_EXIST(*uParam2))
    {
      *uParam2 = func_1386(POPULATION::GET_RANDOM_MODEL_FROM_POPULATION_SET(joaat("NBX_CIVILIANS"), 0, 0, false, true, vParam3), vParam3, 0, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
      TASK::TASK_USE_NEAREST_TRAIN_SCENARIO_TO_COORD_WARP(*uParam2, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, func_2433(1, iParam1)), 2f);
      PED::SET_PED_KEEP_TASK(*uParam2, true);
      return false;
    }
  }
  else
  {
    if ((MISC::GET_GAME_TIMER() % 1000) < 250)
    {
    }
    return false;
  }
  return true;
}