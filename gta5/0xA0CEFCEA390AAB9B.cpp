// am_mp_rc_vehicle.ysc @ L113094
void func_1125()
{
  if (!func_1131())
  {
    CAM::DO_SCREEN_FADE_OUT(500);
    func_1034(PLAYER::PLAYER_ID(), 0, 0, 0);
    PAD::_0xA0CEFCEA390AAB9B(0);
    func_1126(1);
    MISC::SET_BIT(&(uLocal_87[PLAYER::PLAYER_ID()]), false);
    func_978(&(Local_121.f_35), 0, 0);
    func_1105(1);
  }
}