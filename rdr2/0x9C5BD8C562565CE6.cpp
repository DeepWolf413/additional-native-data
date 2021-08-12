// act_bankrobbery01.ysc @ L35993
void func_1035()
{
  int iVar0;
  struct<17> Var1;

  if (Global_1935630.f_18)
  {
    LAW::_0x9C5BD8C562565CE6(&Var1);
    if (Var1.f_16 || Var1.f_15)
    {
      iVar0 = 1;
    }
    else
    {
      iVar0 = 2;
    }
  }
  else if ((LAW::_0x89E005B1662F6E48(PLAYER::PLAYER_ID(), 1, 0) || LAW::_0x3738B784DDD35CC6(PLAYER::PLAYER_ID(), 1, 0)) || Global_1934266.f_78.f_62 > -1)
  {
    iVar0 = 1;
  }
  else
  {
    iVar0 = 2;
  }
  if (Global_1934266.f_78.f_63 > 0)
  {
    iVar0 = Global_1934266.f_78.f_63;
  }
  DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1934266.f_78.f_1.f_3, iVar0);
  DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1934266.f_78.f_19.f_3, iVar0);
  DATABINDING::_DATABINDING_WRITE_DATA_INT(Global_1934266.f_78.f_37.f_3, iVar0);
}