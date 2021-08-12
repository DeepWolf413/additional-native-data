// am_armwrestling.ysc @ L43597
void func_254()
{
  if (!func_255(PLAYER::PLAYER_ID(), 0, 0))
  {
    CAM::_DISABLE_VEHICLE_FIRST_PERSON_CAM_THIS_FRAME();
    CAM::_DISABLE_FIRST_PERSON_CAM_THIS_FRAME();
  }
}