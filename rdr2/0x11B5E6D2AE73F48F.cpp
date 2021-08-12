// map_app_event_handler.ysc @ L3670
int func_114(var uParam0, var uParam1)
{
  var uVar0;

  if (!STATS::_STAT_ID_IS_VALID(&uParam0))
  {
    return 0;
  }
  else if (!STATS::STAT_ID_GET_BOOL(&uParam0, &uVar0))
  {
    return 0;
  }
  return uVar0;
}