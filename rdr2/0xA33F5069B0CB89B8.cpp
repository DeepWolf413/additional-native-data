// fishing_core.ysc @ L14546
void func_558(var uParam0, var uParam1, var uParam2, int iParam3)
{
  int iVar0;

  if (func_79(uParam1, iParam3, 1048576))
  {
    return;
  }
  func_548(uParam1, iParam3, 1048576);
  if (iParam3 == 0)
  {
    func_72(uParam0);
    WATER::_0xA33F5069B0CB89B8();
    func_807();
    func_808(uParam0, uParam1, uParam2, iParam3);
  }
  func_451(iParam3);
  if (Global_1900073.f_154[iParam3] == 1)
  {
    (uParam1[iParam3 /*263*/])->f_73++;
    func_792(uParam0, uParam1, iParam3, 2);
    iVar0 = func_809(uParam0, uParam1, uParam2, iParam3);
    func_187(uParam0, uParam1, uParam2, iParam3, 0, iVar0, 1);
  }
}