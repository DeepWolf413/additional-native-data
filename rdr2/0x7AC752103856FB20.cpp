// save_menu_ui_event_handler.ysc @ L5
void __EntryFunction__()
{
  vector3 vVar0;

  MISC::NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
  NETWORK::NETWORK_SET_SCRIPT_READY_FOR_EVENTS(false);
  if (PLAYER::HAS_FORCE_CLEANUP_OCCURRED(4))
  {
    func_1();
  }
  while (true)
  {
    while (UIEVENTS::_EVENT_MANAGER_IS_EVENT_PENDING(iScriptParam_0))
    {
      if (UIEVENTS::_EVENT_MANAGER_PEEK_EVENT(iScriptParam_0, &vVar0))
      {
        switch (vVar0.x)
        {
          case -493190640:
            if (vVar0.z == 1535628899)
            {
              Global_20 = 1;
            }
            break;
        }
        UIEVENTS::_EVENT_MANAGER_POP_EVENT(iScriptParam_0);
      }
    }
    BUILTIN::WAIT(0);
  }
  func_1();
}