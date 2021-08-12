// finale_endgame.ysc @ L120888
int func_673(int* iParam0, int iParam1)
{
  if (!DATAFILE::DATAFILE_UPDATE_SAVE_TO_CLOUD(iParam0))
  {
    if (*iParam0)
    {
      if (unk_0x4D9115464D37FCEB(0) != 0 && iParam1)
      {
        unk_0x9C02B660CDCF1292(0);
      }
      return 1;
    }
    else
    {
      if (unk_0x4D9115464D37FCEB(0) != 0 && iParam1)
      {
        unk_0x9C02B660CDCF1292(0);
      }
      return 1;
    }
  }
  return 0;
}