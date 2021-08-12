// abigail2_1.ysc @ L26059
int func_469()
{
  int iVar0;

  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 < 8)
  {
    func_961(iVar0);
    func_962(&(Global_1899848.f_32[iVar0 /*21*/].f_3), 0, 1);
    func_962(&(Global_1899848.f_32[iVar0 /*21*/].f_4), 0, 0);
    iVar0++;
  }
  if (VOLUME::_DOES_VOLUME_EXIST(Global_1899848.f_201.f_14))
  {
    POPULATION::_0x74C2B3DC0B294102(Global_1899848.f_201.f_14);
    POPULATION::_0xA1CFB35069D23C23(Global_1899848.f_201.f_14);
    VOLUME::_DELETE_VOLUME(Global_1899848.f_201.f_14);
  }
  func_963();
  func_962(&(Global_1899848.f_201.f_12), 0, 1);
  func_962(&(Global_1899848.f_15.f_10), 0, 1);
  func_964(0);
  if (Global_1899848.f_217 == 0)
  {
    func_468(1, 1);
  }
  return 1;
}