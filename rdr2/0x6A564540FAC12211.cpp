// abigail2_1.ysc @ L26646
void func_485(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;

  iVar2 = func_971(0);
  iVar0 = 0;
  while (iVar0 < Global_1946804.f_2657.f_19)
  {
    iVar1 = Global_1946804.f_2657[iVar0];
    if (func_595(iVar1) == iParam0)
    {
      INVENTORY::_0x6A564540FAC12211(iVar2, iVar1);
    }
    iVar0++;
  }
  func_973(func_972(iParam0), 6);
}