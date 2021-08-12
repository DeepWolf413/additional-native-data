// gang1.ysc @ L52911
void func_1274()
{
  if (func_165(Global_35, 0))
  {
    if (!func_594(4))
    {
      func_874(4);
    }
    PLAYER::_0x1D77B47AFA584E90(PLAYER::PLAYER_ID(), -1, true);
    func_891(100f, 0, 0, 1);
    func_1261(1);
    func_321(joaat("AMMO_REPEATER"), 120, 1, 0, 0, 752097756, 0, 0, 0, 0);
    func_321(joaat("AMMO_REVOLVER"), 50, 1, 0, 0, 752097756, 0, 0, 0, 0);
    AUDIO::_0x6B7A88A61B41E589("GANG1_Deadeye_Override");
    PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 159, true);
    PLAYER::_0xBBA140062B15A8AC(PLAYER::PLAYER_ID());
    PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true, iLocal_198, -1, false);
    SCRIPTS::_0x7D654266025E921B(joaat("CHAL_CTX_CUSTOM_1"));
    PAD::DISABLE_CONTROL_ACTION(1, joaat("INPUT_LOOK_BEHIND"), false);
    func_222(&uLocal_298);
  }
}