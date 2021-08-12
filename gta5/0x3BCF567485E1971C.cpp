// fm_mission_controller.ysc @ L684036
void func_11348(bool bParam0)
{
  if (GRAPHICS::GET_TIMECYCLE_TRANSITION_MODIFIER_INDEX() > -1 || GRAPHICS::_0x98D18905BF723B99())
  {
    return;
  }
  if (bParam0)
  {
    GRAPHICS::SET_TRANSITION_TIMECYCLE_MODIFIER("spectator6", 10f);
    MISC::SET_BIT(&bLocal_58960, true);
    CAM::SHAKE_GAMEPLAY_CAM("DRUNK_SHAKE", 1f);
  }
  else
  {
    GRAPHICS::_0x1CBA05AE7BD7EE05(10f);
    MISC::CLEAR_BIT(&bLocal_58960, true);
    CAM::STOP_GAMEPLAY_CAM_SHAKING(false);
  }
}