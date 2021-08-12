// am_casino_peds.ysc @ L150597
char* func_1328(int iParam0)
{
  var uVar0;
  struct<13> Var16;
  
  if (!MISC::IS_STRING_NULL_OR_EMPTY(&(Global_22670.f_6277[iParam0 /*16*/])))
  {
    if (MISC::GET_HASH_KEY(&(Global_22670.f_6277[iParam0 /*16*/])) == joaat("CREW_LOGO"))
    {
      Var16 = { func_1295(PLAYER::PLAYER_ID()) };
      NETWORK::NETWORK_CLAN_GET_EMBLEM_TXD_NAME(&Var16, &uVar0);
      return func_1327(&uVar0);
    }
    else
    {
      return func_1327(&(Global_22670.f_6277[iParam0 /*16*/]));
    }
  }
  if (iParam0 == 51)
  {
    return "MPShopSale";
  }
  return "CommonMenu";
}