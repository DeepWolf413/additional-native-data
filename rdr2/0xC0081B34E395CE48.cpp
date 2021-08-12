// camera_item.ysc @ L1674
bool func_38()
{
  switch (iLocal_220)
  {
    case 0:
      if (iLocal_221 == iLocal_223)
      {
      }
      break;
    case 1:
      iLocal_222 = UISTATEMACHINE::_UIFLOWBLOCK_REQUEST(iLocal_221);
      iLocal_220 = 2;
      break;
    case 2:
      if (UISTATEMACHINE::_UIFLOWBLOCK_IS_LOADED(iLocal_222))
      {
        UISTATEMACHINE::_UIFLOWBLOCK_ENTER(iLocal_222, iLocal_223);
        UISTATEMACHINE::_UISTATEMACHINE_CREATE(1459179713, iLocal_222);
        iLocal_220 = 3;
      }
      break;
    case 3:
      return true;
    case 4:
      return true;
  }
  return false;
}