// beat_bandito_breakout.ysc @ L1505
void func_40(int iParam0)
{
  int iVar0;
  bool bVar1;

  iVar0 = 0;
  iVar0 = 0;
  while (iVar0 < 5)
  {
    bVar1 = func_170((*iParam0)[iVar0], Local_670[iVar0 /*32*/].f_11, 0);
    if (func_171(iLocal_82[iVar0], 180f, 30f, -1082130432 /* Float: -1f */, -1082130432 /* Float: -1f */))
    {
      ENTITY::SET_PED_AS_NO_LONGER_NEEDED(iParam0[iVar0]);
      if (bVar1)
      {
        ENTITY::SET_PED_AS_NO_LONGER_NEEDED(&(Local_670[iVar0 /*32*/].f_11));
      }
    }
    else
    {
      PED::_0x39A2FC5AF55A52B1((*iParam0)[iVar0], -1);
      if (bVar1)
      {
        PED::_0x39A2FC5AF55A52B1(Local_670[iVar0 /*32*/].f_11, -1);
      }
    }
    iVar0++;
  }
}