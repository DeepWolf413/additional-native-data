// beat_public_hanging.ysc @ L16064
void func_379(int iParam0, int iParam1)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;

  iVar0 = 0;
  while (iVar0 < Global_40.f_9829)
  {
    if (Global_40.f_9829[iVar0 /*4*/] == iParam0)
    {
      if (iVar1 == iParam1)
      {
        Global_40.f_9829[iVar0 /*4*/].f_1 = 0;
        Global_40.f_9829[iVar0 /*4*/].f_3 = 1;
        iVar2 = func_578(iParam0, iParam1);
        iVar3 = func_579(iParam0);
        PERSCHAR::_0x70605812ABC9FF0F(iVar2, iVar3);
      }
      iVar1++;
    }
    iVar0++;
  }
}