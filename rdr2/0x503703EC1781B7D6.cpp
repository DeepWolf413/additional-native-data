// fishing_core.ysc @ L11536
void func_459(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4)
{
  if (!func_238(iParam3))
  {
    return;
  }
  if (AUDIO::_0x84848E1C0FC67DBB((uParam1[iParam4 /*263*/])->f_91))
  {
    AUDIO::_0xF1C5310FEAA36B48((uParam1[iParam4 /*263*/])->f_91, "STRUGGLE", uParam2->f_163[iParam3], *uParam0, 0, 0);
    AUDIO::_0x503703EC1781B7D6((uParam1[iParam4 /*263*/])->f_91, "FishSize", uParam2->f_409[iParam3]);
  }
}