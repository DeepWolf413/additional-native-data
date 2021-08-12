// event_area_centralunion_stg1.ysc @ L25373
void func_688(int iParam0, int iParam1, var uParam2, bool bParam3, int iParam4, bool bParam5, bool bParam6)
{
  vector3 vVar0;

  if (!ENTITY::IS_ENTITY_DEAD(iParam0))
  {
    vVar0 = { ENTITY::GET_ENTITY_COORDS(iParam0, true, false) };
    if (iParam1 < 0)
    {
      if (!bParam5)
      {
        TASK::TASK_USE_NEAREST_SCENARIO_TO_COORD_WARP(iParam0, vVar0, 1.5f, bParam3, bParam6, false, false, false);
      }
      else
      {
        TASK::TASK_USE_NEAREST_SCENARIO_CHAIN_TO_COORD_WARP(iParam0, vVar0, 1.5f, bParam3, false, false, false);
      }
    }
    else
    {
      TASK::TASK_PLAY_ANIM(iParam0, (*uParam2)[iParam1 /*2*/], (uParam2[iParam1 /*2*/])->f_1, 8f, -8f, bParam3, iParam4, 0f, false, 0, false, 0, false);
    }
  }
}