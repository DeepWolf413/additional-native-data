// short_update.ysc @ L18054
void func_538()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < Global_40.f_11095.f_4)
  {
    if (Global_40.f_11095.f_4[iVar0 /*2*/].f_1 > 0f)
    {
      ATTRIBUTE::_ENABLE_ATTRIBUTE_CORE_OVERPOWER(Global_35, func_1635(iVar0), Global_40.f_11095.f_4[iVar0 /*2*/].f_1, false);
    }
    if (Global_40.f_11095.f_4[iVar0 /*2*/] > 0f)
    {
      ATTRIBUTE::ENABLE_ATTRIBUTE_OVERPOWER(Global_35, func_1635(iVar0), Global_40.f_11095.f_4[iVar0 /*2*/], false);
    }
    iVar0++;
  }
}