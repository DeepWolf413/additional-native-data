// bjack_sp.ysc @ L35424
int func_1189(int iParam0, char* sParam1, char* sParam2)
{
  int iVar0;

  if (iParam0 == 0)
  {
  }
  else
  {
    iVar0 = NETWORK::GET_STATUS_OF_TEXTURE_DOWNLOAD(iParam0);
    if (iVar0 == 0)
    {
      StringCopy(sParam1, NETWORK::TEXTURE_DOWNLOAD_GET_NAME(iParam0), 64);
      *sParam2 = { *sParam1 };
      return 1;
    }
    if (iVar0 == 2)
    {
    }
    else if (iVar0 == 1)
    {
    }
  }
  StringCopy(sParam1, "avatar_generic", 64);
  StringCopy(sParam2, "minigames_hud", 64);
  return 0;
}