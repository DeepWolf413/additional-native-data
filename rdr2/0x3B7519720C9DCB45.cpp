// bjack_sp.ysc @ L20872
bool func_704(var uParam0)
{
  switch (uParam0->f_1)
  {
    case 1:
      func_699(uParam0, 2);
      break;
    case 2:
      if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
      {
        func_699(uParam0, 3);
      }
      break;
    case 3:
      if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(uParam0->f_2))
      {
        UISTATEMACHINE::_UIFLOWBLOCK_ENTER(uParam0->f_2, uParam0->f_3);
        UISTATEMACHINE::_UISTATEMACHINE_CREATE(-1631983120, uParam0->f_2);
        func_699(uParam0, 4);
      }
      break;
    case 4:
      if (MISC::GET_FRAME_COUNT() > uParam0->f_193 && uParam0->f_194 != -1)
      {
        func_1035(uParam0, -1);
      }
      break;
  }
  return uParam0->f_1 == 4;
}