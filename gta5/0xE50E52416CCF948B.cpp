// am_joyrider.ysc @ L1035
bool func_35()
{
  if (!MISC::IS_BIT_SET(iLocal_170, 1))
  {
    if (PATHFIND::GET_NTH_CLOSEST_VEHICLE_NODE(func_33(PLAYER::PLAYER_ID()), iLocal_174, &(Local_61.f_6), 4, 1077936128, 0))
    {
      MISC::SET_BIT(&iLocal_170, 1);
    }
    else
    {
      iLocal_174++;
    }
  }
  return MISC::IS_BIT_SET(iLocal_170, 1);
}