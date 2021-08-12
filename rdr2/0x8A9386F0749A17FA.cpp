// abigail2_1.ysc @ L58416
void func_1557(int iParam0)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;

  iVar0 = func_970(iParam0, 1);
  iVar1 = (iVar0 / 31);
  iVar2 = (iVar0 % 31);
  if (Global_1572887.f_12 == -1)
  {
    MISC::SET_BIT(&(Global_40.f_283[iVar1]), iVar2);
  }
  else
  {
    iVar3 = PLAYER::NETWORK_PLAYER_ID_TO_INT();
    if (iVar3 == 255)
    {
      Global_1058888.f_40567.f_46 = 1;
      MISC::SET_BIT(&(Global_1058888.f_40567.f_14[iVar1]), iVar2);
    }
    else
    {
      MISC::SET_BIT(&(Global_1055058[iVar3 /*116*/].f_72[iVar1]), iVar2);
    }
    MISC::SET_BIT(&(Global_1058888.f_40567[iVar1]), iVar2);
  }
  Global_1934765 = 0;
}