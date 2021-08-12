// agency_heist1.ysc @ L93910
int func_440(struct<3> Param0, bool bParam3)
{
  int iVar0;
  
  iVar0 = HUD::ADD_BLIP_FOR_COORD(Param0);
  HUD::SET_BLIP_SCALE(iVar0, func_71(NETWORK::NETWORK_IS_GAME_IN_PROGRESS(), 1f, 1f));
  HUD::SET_BLIP_ROUTE(iVar0, bParam3);
  return iVar0;
}