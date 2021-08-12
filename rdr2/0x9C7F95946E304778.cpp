// abigail2_1.ysc @ L80243
void func_2363(int iParam0, bool bParam1)
{
  int iVar0;

  if (PERSCHAR::_0xA8120EBEAF290C7A(func_455(iParam0, 0)))
  {
    iVar0 = PERSCHAR::_0x69786495C92A3044(func_455(iParam0, 0));
    if (iVar0 != Global_1360165[iParam0 /*1157*/].f_47 || bParam1)
    {
      Global_1360165[iParam0 /*1157*/].f_47 = iVar0;
      StringCopy(&(Global_1360165[iParam0 /*1157*/].f_48), PERSCHAR::_0x9C7F95946E304778(func_455(iParam0, 0), Global_1360165[iParam0 /*1157*/].f_47), 64);
      Global_1360165[iParam0 /*1157*/].f_56 = 1;
    }
  }
}