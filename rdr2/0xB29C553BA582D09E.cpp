// interactive_campfire.ysc @ L38773
int func_1212(int iParam0, int iParam1, int iParam2)
{
  var uVar0[15];
  int iVar16;
  int iVar17;

  PED::_0xB29C553BA582D09E(&uVar0, iParam0, iParam1, 1);
  iVar16 = 0;
  iVar17 = 0;
  while (iVar17 < 15)
  {
    if (func_121(uVar0[iVar17], 0) && iParam2 == uVar0[iVar17])
    {
      iVar16++;
    }
    iVar17++;
  }
  return iVar16;
}