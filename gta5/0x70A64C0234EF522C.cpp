// fm_mission_controller.ysc @ L358844
void func_5067()
{
  struct<10> Var0;
  
  if (func_835(iLocal_17297) && !AUDIO::HAS_SOUND_FINISHED(iLocal_17297))
  {
    AUDIO::STOP_SOUND(bLocal_17297);
    AUDIO::RELEASE_SOUND_ID(bLocal_17297);
  }
  if (func_835(iLocal_17298) && !AUDIO::HAS_SOUND_FINISHED(iLocal_17298))
  {
    AUDIO::STOP_SOUND(bLocal_17298);
    AUDIO::RELEASE_SOUND_ID(bLocal_17298);
  }
  if (func_5081())
  {
    func_5080(0);
  }
  MISC::CLEAR_BIT(&(Global_2544210.f_4658), 17);
  func_5079(1, 0, 0);
  GRAPHICS::SEETHROUGH_RESET();
  MISC::CLEAR_BIT(&bLocal_14847, 27);
  if (func_15010())
  {
    Var0.f_1 = -1000;
    Var0.f_8 = -1;
    Var0.f_9 = -1;
    func_5068(&Var0);
  }
}