// abigail2_1.ysc @ L50595
void func_1308(int iParam0, bool bParam1, bool bParam2)
{
  int iVar0;

  iVar0 = 10;
  if (func_441(1108822547, 6))
  {
    if (bParam2)
    {
      func_1306(iParam0, iVar0, func_20() != -1, 0, 0);
      func_446(1108822547, 1, 6);
    }
    else
    {
      return;
    }
  }
  else
  {
    PED::_0xBC6DF00D7A4A6819(iParam0, Global_1946804.f_2776.f_1, Global_1946804.f_2776.f_3[0], Global_1946804.f_2776.f_3[1], Global_1946804.f_2776.f_3[2], Global_1946804.f_2776.f_8, Global_1946804.f_2776.f_9, Global_1946804.f_2776.f_10, Global_1946804.f_2776.f_11);
    func_445(1108822547, 1, 6);
  }
  Global_1946804.f_857++;
  if (!bParam1)
  {
    return;
  }
  PED::_UPDATE_PED_VARIATION(iParam0, false, true, true, true, false);
}