// bounty1.ysc @ L25485
void func_433()
{
  func_902("CORRECTOR_SHAKE", 0);
  func_902("MINIGAME_BOUNTY_SHAKE", 0);
  if (CAM::_0x927B810E43E99932(&Local_158))
  {
    CAM::_0x0A5A4F1979ABB40E(&Local_158);
  }
  if (CAM::_0xDD0B7C5AE58F721D(&Local_158))
  {
    CAM::_0x798BE43C9393632B(&Local_158);
  }
  CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
}