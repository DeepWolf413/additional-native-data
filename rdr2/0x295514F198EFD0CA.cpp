// abigail2_1.ysc @ L63333
bool func_1695()
{
  if (!ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_15))
  {
    if (TASK::_DOES_SCENARIO_POINT_EXIST(Global_1899848.f_15.f_1))
    {
      Global_1899848.f_15 = TASK::_GET_SCENARIO_POINT_ENTITY(Global_1899848.f_15.f_1, "p_pitchfork01x_PH_R_HAND");
      if (ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_15))
      {
      }
    }
  }
  return ENTITY::DOES_ENTITY_EXIST(Global_1899848.f_15);
}