// tuneables_processing.ysc @ L26
void __EntryFunction__()
{
  iLocal_2 = 1;
  iLocal_3 = 134;
  iLocal_4 = 134;
  iLocal_5 = 1;
  iLocal_6 = 1;
  iLocal_7 = 1;
  iLocal_8 = 134;
  iLocal_9 = 1;
  iLocal_10 = 12;
  iLocal_11 = 12;
  fLocal_14 = 0.001f;
  iLocal_17 = -1;
  sLocal_20 = "NULL";
  MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
  NETWORK::_NETWORK_ALLOCATE_TUNABLES_REGISTRATION_DATA_MAP();
  while (true)
  {
    SYSTEM::WAIT(0);
    if (func_1(ScriptParam_0.x, ScriptParam_0.f_1, ScriptParam_0.f_2))
    {
      SCRIPT::TERMINATE_THIS_THREAD();
    }
  }
}