// am_pi_menu.ysc @ L478666
void func_6696(bool bParam0)
{
  GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&iLocal_2816);
  if (bParam0)
  {
    HUD::RELEASE_CONTROL_OF_FRONTEND();
  }
  else if (Global_1701723)
  {
    func_1655(PLAYER::PLAYER_ID(), 1, 0, 0);
  }
  Global_1701723 = 0;
  func_6624(bParam0);
  iLocal_2821 = 0;
  iLocal_2823 = 0;
  iLocal_2822 = 0;
  func_6625(0);
  iLocal_2824 = -1;
  func_432(&uLocal_2825);
  PAD::DISABLE_CONTROL_ACTION(0, 24, true);
  PAD::DISABLE_CONTROL_ACTION(0, 257, true);
  Global_2405077.f_2688 = 1;
  iLocal_1619 = 0;
}