// beat_player_camp_attack.ysc @ L1667
void func_49()
{
  if (TASK::PED_HAS_USE_SCENARIO_TASK(Global_35))
  {
    iLocal_615 = TASK::_GET_SCENARIO_POINT_PED_IS_USING(Global_35, false);
    if (TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_615))
    {
      vLocal_23 = { TASK::_GET_SCENARIO_POINT_COORDS(iLocal_615, true) };
    }
  }
}