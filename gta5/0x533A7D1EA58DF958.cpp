// grid_arcade_cabinet.ysc @ L1409
void func_46()
{
  if (!NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    return;
  }
  if (MISC::IS_STRING_NULL_OR_EMPTY(&Local_147))
  {
    return;
  }
  if (Local_147.f_19 == 0)
  {
    return;
  }
  Local_147.f_19 = (NETWORK::GET_NETWORK_TIME_ACCURATE() - Local_147.f_19);
  STATS::_PLAYSTATS_ARCADEGAME(MISC::GET_HASH_KEY(&Local_147), Local_147.f_16, Local_147.f_17, Local_147.f_18, Local_147.f_19, Local_147.f_20);
}