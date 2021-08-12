// event_area_centralunion_stg1.ysc @ L27743
void func_774(var uParam0, var uParam1)
{
  VOLUME::_SET_VOLUME_COORDS(*uParam0, VOLUME::_GET_VOLUME_COORDS(*uParam1));
  VOLUME::_SET_VOLUME_ROTATION(*uParam0, VOLUME::_GET_VOLUME_ROTATION(*uParam1));
  VOLUME::_SET_VOLUME_SCALE(*uParam0, VOLUME::_GET_VOLUME_SCALE(*uParam1));
}