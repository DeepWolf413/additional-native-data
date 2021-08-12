// beat_rat_infestation.ysc @ L6617
void func_192(int iParam0)
{
  if (func_15(iLocal_34, 1048576))
  {
    return;
  }
  if (func_58(iLocal_98[0], 0, 1))
  {
    func_423(1);
    LAW::_0x710448D44A64C213(1);
    PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 146, false);
    PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 148, false);
    PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 315, false);
    PED::SET_PED_CONFIG_FLAG(iLocal_98[0], 146, true);
    LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), iParam0, 0, 0, 0, 0, 0, 0, 0);
    PED::_0xC6C4E15CF7D52FEA(iLocal_98[0], 1000f);
    LAW::_0x10827B5A0AAC56A7(PLAYER::PLAYER_ID(), iParam0, iLocal_98[0]);
    LAW::_0xF0B67BAD53C35BD9(iLocal_98[0], Global_35, iLocal_98[0], Global_36, iParam0);
    LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), iParam0, 0, 0, true);
    func_17(&iLocal_34, 1048576);
  }
  else
  {
    func_423(1);
    LAW::_0x710448D44A64C213(1);
    LAW::_0xEDFC6C1FD1C964F5(PLAYER::PLAYER_ID(), iParam0, 0, 0, 0, 0, 0, 0, 0);
    LAW::_REPORT_CRIME(PLAYER::PLAYER_ID(), iParam0, 0, 0, true);
    func_17(&iLocal_34, 1048576);
  }
}