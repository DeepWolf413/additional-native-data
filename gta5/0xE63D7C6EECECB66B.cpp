// fm_mission_controller_2020.ysc @ L497077
void func_8500()
{
  func_8501("HeistCelebPass");
  func_1673(0, 1);
  GRAPHICS::_0xE63D7C6EECECB66B(false);
  func_2424(PLAYER::PLAYER_PED_ID(), 4, -1, -1);
  if (GRAPHICS::GET_REQUESTINGNIGHTVISION() || GRAPHICS::GET_USINGNIGHTVISION())
  {
    func_2698(1, 2);
    func_2697(1);
  }
  MISC::SET_BIT(&bLocal_31557, 10);
  MISC::SET_BIT(&bLocal_31557, 6);
  Global_2453903.f_3478.f_40 = 1;
  Global_1669334 = 1;
}