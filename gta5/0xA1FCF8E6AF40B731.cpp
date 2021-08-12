// fm_mission_controller_2020.ysc @ L706723
int func_12818()
{
  if (PED::IS_PED_SWIMMING_UNDER_WATER(iLocal_22078))
  {
    if (PLAYER::GET_PLAYER_UNDERWATER_TIME_REMAINING(bLocal_22076) <= 0f)
    {
      return 1;
    }
  }
  return 0;
}