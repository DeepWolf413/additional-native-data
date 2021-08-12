// hideout_sixpointcabin.ysc @ L718
void func_12()
{
  if (func_34(63, 0) || func_51(128))
  {
    func_52(16384);
  }
  AUDIO::REGISTER_SCRIPT_WITH_AUDIO(0);
  MISC::CLEAR_AREA(-67.7f, 1234.8f, 168.9f, 4f, 2560);
  func_53();
  func_54();
  func_55();
  func_56();
  func_57();
  func_58();
  func_59();
  func_60();
  func_61();
  func_62();
  func_63(&Local_29, 36, &sLocal_567, 25);
  WEAPON::_0x72D4CB5DB927009C(joaat("WEAPON_REPEATER_CARBINE"), -1, 0);
  func_64(&(Local_29.f_155), 0);
  func_65(&(Local_29.f_155), 1);
  func_66(&(Local_29.f_155), 1);
  func_67(&(Local_29.f_155), 1);
  func_68(&(Local_29.f_155), 40);
  PLAYER::_0x113EF458AB6CDA67(PLAYER::PLAYER_ID(), 0.1f);
  Local_29.f_187 = 15000;
  func_70(&(Local_29.f_155), (func_69(&(Local_29.f_155)) - 10f));
}