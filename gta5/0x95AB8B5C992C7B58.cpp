// buddydeathresponse.ysc @ L25
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
  if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(2) || REPLAY::_IS_INTERIOR_RENDERING_DISABLED())
  {
    SCRIPT::TERMINATE_THIS_THREAD();
  }
  func_1();
}