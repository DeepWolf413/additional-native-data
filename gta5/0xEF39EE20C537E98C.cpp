// assassin_bus.ysc @ L17226
void func_335(int iParam0)
{
  if (!iLocal_1720)
  {
    if (func_368(Local_2246[iParam0 /*30*/].f_1, 1) <= 100f)
    {
      if (!func_336(Local_2246[iParam0 /*30*/].f_24))
      {
        iLocal_1845 = STREAMING::STREAMVOL_CREATE_FRUSTUM(Local_2246[iParam0 /*30*/].f_24, Local_2246[iParam0 /*30*/].f_27, 25f, 12, 127);
        if (iLocal_1747 == 3)
        {
          CUTSCENE::REQUEST_CUTSCENE("ASS_MCS_1", 8);
          STREAMING::_0xEF39EE20C537E98C(133.2094f, -791.931f, 35.3551f, -4.9404f, 0f, 68.7852f);
        }
        iLocal_1720 = 1;
      }
    }
  }
  else if (func_368(Local_2246[iParam0 /*30*/].f_1, 1) > 120f)
  {
    func_299();
    CUTSCENE::REMOVE_CUTSCENE();
  }
}