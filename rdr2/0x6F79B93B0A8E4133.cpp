// map_app_event_handler.ysc @ L2213
char* func_69(int iParam0, var uParam1, var uParam2)
{
  char* sVar0;
  int iVar1;

  if (!NETWORK::NETWORK_IS_HANDLE_VALID(uParam1))
  {
    return "Invalid Handle";
  }
  sVar0 = "";
  switch (iParam0)
  {
    case 0:
    default:
      sVar0 = "Unknown Type";
      break;
      sVar0 = NETWORK::_0xB5C4B18B12A2AF23(uParam1, 0);
      break;
    case 1:
      iVar1 = NETWORK::NETWORK_GET_PLAYER_FROM_GAMER_HANDLE(uParam1);
      if (iVar1 < 0)
      {
        sVar0 = NETWORK::_0xCAF4CA2F87779F8F(uParam1, 0);
      }
      else
      {
        sVar0 = func_103(iVar1);
      }
      break;
  }
  return sVar0;
}