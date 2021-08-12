// short_update.ysc @ L19239
void func_578()
{
  int iVar0;

  iVar0 = 0;
  while (iVar0 < Global_40.f_11095.f_4)
  {
    if (ATTRIBUTE::_IS_ATTRIBUTE_OVERPOWERED(Global_35, func_1635(iVar0)))
    {
      Global_40.f_11095.f_4[iVar0 /*2*/] = ATTRIBUTE::_0x4C9F782180712742(Global_35, func_1635(iVar0));
    }
    else
    {
      Global_40.f_11095.f_4[iVar0 /*2*/] = -1f;
    }
    if (ATTRIBUTE::_0x200373A8DF081F22(Global_35, func_1635(iVar0)))
    {
      Global_40.f_11095.f_4[iVar0 /*2*/].f_1 = ATTRIBUTE::_0xB429F58803D285B1(Global_35, func_1635(iVar0));
    }
    else
    {
      Global_40.f_11095.f_4[iVar0 /*2*/].f_1 = -1f;
    }
    iVar0++;
  }
}