// agency_prep2amb.ysc @ L11685
void func_238()
{
  func_240();
  if (MISC::IS_BIT_SET(iLocal_105, 4))
  {
    if (!MISC::IS_BIT_SET(iLocal_105, 5) && !MISC::IS_BIT_SET(iLocal_105, 16))
    {
      HUD::REQUEST_ADDITIONAL_TEXT("GETAWY", 5);
      if (HUD::HAS_THIS_ADDITIONAL_TEXT_LOADED("GETAWY", 5))
      {
        MISC::SET_BIT(&iLocal_105, 5);
      }
      if (MISC::IS_BIT_SET(iLocal_105, 5))
      {
        func_239();
        iLocal_39 = 0;
        MISC::CLEAR_BIT(&iLocal_105, 7);
        MISC::CLEAR_BIT(&iLocal_105, 0);
        MISC::CLEAR_BIT(&iLocal_105, 1);
        if (func_2(func_3(0)))
        {
          HUD::CLEAR_HELP(true);
        }
        func_4(0);
        iLocal_37 = Global_112293.f_10047.f_128;
      }
    }
  }
}