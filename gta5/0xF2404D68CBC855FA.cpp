// am_mp_arcade.ysc @ L353441
int func_5765(var uParam0, char* sParam1, char* sParam2)
{
  char* sVar0;
  
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam1))
  {
    return 0;
  }
  if (MISC::IS_STRING_NULL_OR_EMPTY(sParam2))
  {
    return 0;
  }
  if (!func_5771(uParam0))
  {
    return 0;
  }
  if (!func_5770())
  {
    return 0;
  }
  func_5767(uParam0);
  sVar0 = func_5758();
  NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::GET_PLAYER_PED(PLAYER::PLAYER_ID()), uParam0->f_67, sVar0, sParam1, 1.5f, -1.5f, 13, 16, 1000f, 0);
  NETWORK::NETWORK_ADD_ENTITY_TO_SYNCHRONISED_SCENE(func_5766(uParam0), uParam0->f_67, sVar0, sParam2, 1.5f, -1.5f, 13);
  NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_67);
  return 1;
}