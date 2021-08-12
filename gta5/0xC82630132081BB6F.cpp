// fmmc_launcher.ysc @ L370808
char* func_6071(int iParam0)
{
  bool bVar0;
  struct<13> Var1;
  
  if (iParam0 >= 32)
  {
    return "";
  }
  bVar0 = iParam0;
  if (MISC::IS_XBOX360_VERSION())
  {
    Var1 = { func_61(bVar0) };
    return NETWORK::NETWORK_MEMBER_ID_FROM_GAMER_HANDLE(&Var1);
  }
  return PLAYER::GET_PLAYER_NAME(bVar0);
}