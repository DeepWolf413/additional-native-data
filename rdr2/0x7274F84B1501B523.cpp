// camp_beaverhollow.ysc @ L1524
void func_44(var uParam0)
{
  int iVar0;
  int iVar1;

  iVar0 = (*uParam0)[2];
  if (VOLUME::_DOES_VOLUME_EXIST(iVar0))
  {
    func_289(iVar0);
    POPULATION::_0x74C2B3DC0B294102(iVar0);
    POPULATION::_0xA1CFB35069D23C23(iVar0);
    COMPANION::_0x7274F84B1501B523(iVar0);
  }
  iVar1 = 0;
  while (iVar1 < 7)
  {
    if (VOLUME::_DOES_VOLUME_EXIST((*uParam0)[iVar1]))
    {
      func_290((*uParam0)[iVar1]);
    }
    iVar1++;
  }
}