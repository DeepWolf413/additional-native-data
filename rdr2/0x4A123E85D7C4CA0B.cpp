// camera_item.ysc @ L699
void func_2()
{
  if (iLocal_11 == 1)
  {
    _NAMESPACE77::_0x00A15B94CBA4F76F(iLocal_41);
  }
  DATABINDING::_DATABINDING_REMOVE_DATA_ENTRY(uLocal_21);
  UISTATEMACHINE::_UISTATEMACHINE_DESTROY(1459179713);
  UISTATEMACHINE::_UIFLOWBLOCK_RELEASE(&iLocal_222);
  iLocal_222 = 0;
  func_26();
  if (GRAPHICS::ANIMPOSTFX_IS_RUNNING(sLocal_37))
  {
    GRAPHICS::ANIMPOSTFX_STOP(sLocal_37);
  }
  GRAPHICS::_0x37D7BDBA89F13959("CameraViewfinder");
  GRAPHICS::_0x37D7BDBA89F13959("CameraTransitionBlink");
  func_14();
  func_43(0);
}