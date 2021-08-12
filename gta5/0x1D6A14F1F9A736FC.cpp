// am_contact_requests.ysc @ L64384
void func_1027(int iParam0, int iParam1, int iParam2, int iParam3)
{
  struct<6> Var0;
  
  Var0 = -654645351;
  Var0.f_1 = PLAYER::PLAYER_ID();
  Var0.f_3 = iParam1;
  Var0.f_5 = iParam3;
  Var0.f_2 = iParam2;
  if (!iParam0 == 0)
  {
    if (iParam3 == 0)
    {
      Global_2453903.f_4315[Var0.f_3] = 0;
      func_72(&(Global_2453903.f_4315.f_71[iParam1 /*2*/]), 1, 0);
      Global_2453903.f_4315.f_424 = NETWORK::NETWORK_GET_HOST_OF_SCRIPT(func_1028(), -1, 0);
    }
    else
    {
      Global_2544210.f_4533.f_1 = 0;
      func_72(&(Global_2544210.f_4533.f_2), 0, 0);
    }
    SCRIPT::TRIGGER_SCRIPT_EVENT(1, &Var0, 6, iParam0);
  }
}