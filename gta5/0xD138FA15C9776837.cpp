// act_cinema.ysc @ L95535
void func_696(int iParam0)
{
  if (ENTITY::GET_ENTITY_MODEL(iParam0) == joaat("deluxo"))
  {
    if (func_698(iParam0, 1092616192) || func_697(iParam0))
    {
      VEHICLE::_SET_VEHICLE_HOVER_TRANSFORM_ENABLED(iParam0, true);
      VEHICLE::_SET_VEHICLE_HOVER_TRANSFORM_RATIO(iParam0, (0.75f - MISC::GET_FRAME_TIME()));
      VEHICLE::_SET_VEHICLE_HOVER_TRANSFORM_PERCENTAGE(iParam0, 1f);
      VEHICLE::_SET_SPECIALFLIGHT_WING_RATIO(iParam0, 1f);
    }
  }
}