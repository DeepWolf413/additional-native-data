// am_casino_peds.ysc @ L231252
int func_2560(struct<3> Param0, struct<3> Param3)
{
  if (func_2561(Param0, 99) || func_2561(Param3, 99))
  {
    return 3;
  }
  return STREAMING::GET_IDEAL_PLAYER_SWITCH_TYPE(Param0, Param3);
}