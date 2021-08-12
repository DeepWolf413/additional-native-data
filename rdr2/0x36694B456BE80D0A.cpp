// loanshark_miner1.ysc @ L1515
void func_55(var uParam0)
{
  UILOG::_UILOG_MARK_ALL_ENTRIES_AVAILABILITY(2, "");
  if (!func_163(Global_1392626[*uParam0 /*32*/].f_3))
  {
    if (!func_164(Global_1392626[*uParam0 /*32*/].f_3))
    {
      func_165(Global_1392626[*uParam0 /*32*/].f_3, 1);
    }
    func_166(Global_1392626[*uParam0 /*32*/].f_3, 1, 1);
    func_167(&Global_1935630, 4);
    func_168(4);
  }
  func_29(&(Global_1392626[*uParam0 /*32*/].f_9), 4);
  func_98(*uParam0);
  MISC::_0x1096603B519C905F(func_169(*uParam0));
  if (!MISC::GET_MISSION_FLAG())
  {
    MISC::SET_MISSION_FLAG(true);
  }
  func_73(uParam0, 1, 0);
  AUDIO::_0x33D51F801CB16E4F();
  func_132(1);
  PED::SET_PED_CAN_USE_AUTO_CONVERSATION_LOOKAT(Global_35, true);
  func_170(1);
  func_171(uParam0);
}