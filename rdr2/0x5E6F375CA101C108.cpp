// region_town_lockdown_generic.ysc @ L68
void __EntryFunction__()
{
  fLocal_7 = 1f;
  fLocal_8 = 1f;
  iLocal_41 = ScriptParam_0;
  bLocal_148 = ScriptParam_0.f_3;
  if (!bLocal_148)
  {
  }
  LAW::_0x5E6F375CA101C108(PLAYER::PLAYER_ID(), 1);
  if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(546))
  {
    LAW::_0x29CD4896ECB66C12();
    func_1(1);
    SCRIPTS::TERMINATE_THIS_THREAD();
  }
  func_2();
  while (func_3(iLocal_41))
  {
    func_4();
    func_5();
    BUILTIN::WAIT(0);
  }
  if (!func_7(func_6()))
  {
    LAW::_0x5E6F375CA101C108(PLAYER::PLAYER_ID(), 0);
  }
  LAW::_0x29CD4896ECB66C12();
  func_1(1);
}