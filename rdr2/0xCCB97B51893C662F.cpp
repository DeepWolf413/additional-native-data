// short_update.ysc @ L52275
void func_1686(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar4 = PED::_0xA622E66EEE92A08D(iParam0);
  iVar3 = func_1661(iParam1);
  if (iVar3 == 0)
  {
    return;
  }
  iVar0 = 0;
  while (iVar0 < iVar4)
  {
    iVar1 = PED::_0xCCB97B51893C662F(iParam0, iVar0);
    iVar2 = func_2960(iVar1);
    if (iVar2 == -1)
    {
    }
    else if (!func_2961(iVar2, iVar3))
    {
    }
    else
    {
      PED::_SET_PED_COMPONENT_DISABLED(iParam0, iVar1, 1);
    }
    iVar0++;
  }
}