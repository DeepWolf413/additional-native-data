// rcm_mr_mayor2.ysc @ L9123
bool func_323(float fParam0, int iParam1, bool bParam2)
{
  vector3 vVar0;

  vVar0 = { 2697.616f, 168.9825f, 52.2898f };
  if (!ENTITY::IS_ENTITY_DEAD(iLocal_350) && !ENTITY::IS_ENTITY_DEAD(iLocal_163))
  {
    if (!func_325(iLocal_163, 1306903184) || bParam2)
    {
      TASK::TASK_GO_TO_COORD_ANY_MEANS_EXTRA_PARAMS_WITH_CRUISE_SPEED(iLocal_163, vVar0, fParam0, iLocal_350, 1, iParam1, -1082130432 /* Float: -1f */, 0, 1101004800 /* Float: 20f */, 520, fParam0, 1082130432 /* Float: 4f */, 0);
    }
    else
    {
      return true;
    }
  }
  return false;
}