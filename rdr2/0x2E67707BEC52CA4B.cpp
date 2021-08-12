// hideout_shadybelle.ysc @ L5634
void func_211(bool bParam0)
{
  PLAYER::_0x2E67707BEC52CA4B(PLAYER::PLAYER_ID());
  func_361();
  func_362();
  func_363(11, 128);
  func_364(11, 1);
  PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 384, false);
  AUDIO::TRIGGER_MUSIC_EVENT("SP_HIDEOUTS_GENERAL_IDLE");
  if (bParam0)
  {
    func_365(&Local_284, &Local_60, &uLocal_603, SCRIPTS::GET_ID_OF_THIS_THREAD(), "SHADY");
  }
}