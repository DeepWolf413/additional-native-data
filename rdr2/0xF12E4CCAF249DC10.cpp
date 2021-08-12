// bjack_sp.ysc @ L520
int func_10()
{
  if (Local_14.f_3497.f_47)
  {
    PAD::_SET_CONTROL_CONTEXT(4, joaat("MINIGAMEBLACKJACK"));
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MULTIPLAYER_INFO"), false);
  }
  if (func_96(Local_14.f_3218.f_277))
  {
    if (PAD::_IS_USING_KEYBOARD(0) && Local_14.f_3497.f_47)
    {
      if (!func_97(Local_14.f_3218.f_277, 1))
      {
        _NAMESPACE30::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
        _NAMESPACE30::_SET_MOUSE_CURSOR_SPRITE(0);
        PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), false);
        PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), false);
      }
    }
    else
    {
      PAD::DISABLE_CONTROL_ACTION(2, joaat("INPUT_PC_FREE_LOOK"), false);
    }
  }
  func_98(&Local_14);
  return 0;
}