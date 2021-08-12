// bounty1.ysc @ L48621
bool func_1213()
{
  if (!CAM::_0xDD0B7C5AE58F721D(&Local_158))
  {
    StringCopy(&Local_158, "Bou1_suspend_cam", 64);
    StringCopy(&(Local_158.f_8), "CHAINED_ORBIT_REQUEST", 64);
    Local_158.f_30 = 0f;
    CAM::_0x6A4D224FC7643941(&Local_158);
    return false;
  }
  else if (!CAM::_0x927B810E43E99932(&Local_158))
  {
    CAM::_0xB8B207C34285E978(&Local_158);
    Local_158.f_16 = Global_35;
    CAM::SHAKE_GAMEPLAY_CAM("CORRECTOR_SHAKE", 1f);
    CAM::SHAKE_GAMEPLAY_CAM("MINIGAME_BOUNTY_SHAKE", 0f);
  }
  CAM::_0xAC77757C05DE9E5A(&Local_158);
  return true;
}