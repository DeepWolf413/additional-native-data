// ambush_bnd_cliff1.ysc @ L6367
void func_245(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
  if (!VOLUME::_DOES_VOLUME_EXIST(iParam0))
  {
    return;
  }
  POPULATION::_0xB56D41A694E42E86(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 2);
  POPULATION::_0x18262CAFEBB5FBE1(iParam0, iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, 0);
  if (bParam3)
  {
    func_236(&iParam1, 8192);
  }
  if (bParam4)
  {
    POPULATION::_0x2161278C6322F740(iParam1 | 4096 | 2 | 4 | 1, iParam2 | 16384, 0, -1, -1, iParam0);
  }
}