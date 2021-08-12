// am_pi_menu.ysc @ L399089
void func_5726()
{
  bool bVar0;
  
  StringCopy(&(Global_2520218.f_6733), "PIM_TITLE5", 24);
  StringIntConCat(&(Global_2520218.f_6733), bLocal_1367, 24);
  func_1152(&(Global_2520218.f_6733));
  bVar0 = false;
  if (bLocal_1367 == 0)
  {
    if (((Global_2544210.f_283 > 0 && MONEY::NETWORK_CAN_SHARE_JOB_CASH()) && func_5720() > 0) && func_1165(PLAYER::PLAYER_ID()) != 154)
    {
      bVar0 = true;
    }
    func_1148(0, "PIM_DILJ", 0, bVar0, 0, 0, 0);
    if (Global_2520218.f_6739 == 0 && bVar0 == 1)
    {
      Global_2520129 = 1;
    }
  }
  func_1134(0, 0, 0, 0, 0);
}