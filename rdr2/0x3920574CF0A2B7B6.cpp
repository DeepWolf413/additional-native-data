// loanshark_catfish.ysc @ L1701
void func_39(char[4] cParam0)
{
  func_162(cParam0);
  if (func_20(Global_1392626[*cParam0 /*32*/].f_9, 4))
  {
    func_99();
    func_163(0);
    if (!Global_1935630.f_12)
    {
      PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, false);
      PED::SET_PED_CONFIG_FLAG(Global_35, 360, false);
    }
    UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(0, "");
    func_164();
  }
  func_37(&(Global_1392626[*cParam0 /*32*/].f_9), 4);
  if (func_123(cParam0) != 2 && !func_124(Global_1392626[*cParam0 /*32*/].f_10, 2))
  {
    func_125(*cParam0);
  }
  func_122(cParam0);
  if (func_123(cParam0) == 0)
  {
    func_127(*cParam0);
  }
  CAM::RENDER_SCRIPT_CAMS(false, false, 3000, true, false, 0);
  func_165();
  func_126(&(cParam0->f_2210[0]), &(cParam0->f_2213[0]));
  func_126(&(cParam0->f_2210[1]), &(cParam0->f_2213[1]));
  func_29(&(Global_1392626[*cParam0 /*32*/].f_9), 8);
  func_166(cParam0);
}