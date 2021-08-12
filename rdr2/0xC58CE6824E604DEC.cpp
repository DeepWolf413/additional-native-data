// beat_murder_campfire.ysc @ L3791
void func_122()
{
  if (func_229(Global_35, iLocal_521, 1, 0) && !func_29(iLocal_528, 2048))
  {
    PLAYER::_0x0F9CF06986300875(PLAYER::PLAYER_ID());
    PLAYER::_0xC58CE6824E604DEC(PLAYER::PLAYER_ID());
    PLAYER::_0xAE637BB8EF017875(PLAYER::PLAYER_ID(), 1);
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), false);
  }
}