// am_vehicle_spawn.ysc @ L302008
int func_5142(bool bParam0, int iParam1)
{
  MISC::SET_RANDOM_SEED(MISC::GET_GAME_TIMER());
  return func_5143(iParam1, MISC::GET_RANDOM_INT_IN_RANGE(0, func_5144(func_5148(bParam0), iParam1)));
}