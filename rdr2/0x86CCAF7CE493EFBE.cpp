// law_arrest.ysc @ L253
void __EntryFunction__()
{
  fLocal_7 = 1f;
  fLocal_8 = 1f;
  iLocal_20 = 15;
  iLocal_21 = 20;
  iLocal_22 = 6;
  iLocal_23 = 5000;
  iLocal_24 = -1;
  iLocal_25 = -1;
  bLocal_32 = true;
  if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(514))
  {
    func_1(&uScriptParam_0, 1);
    SCRIPTS::TERMINATE_THIS_THREAD();
  }
  while (!func_2(&uScriptParam_0))
  {
    BUILTIN::WAIT(0);
  }
  if (STREAMING::_0xCF45DF50C7775F2A())
  {
    STREAMING::CLEAR_FOCUS();
    STREAMING::_0x5A8B01199C3E79C3();
  }
  SCRIPTS::TERMINATE_THIS_THREAD();
}