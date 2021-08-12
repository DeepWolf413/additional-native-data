// animal_controller.ysc @ L106231
void func_639()
{
  HUD::CLEAR_HELP(true);
  func_460(&iLocal_1604);
  PLAYER::SET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID(), iLocal_1357, false);
  if (iLocal_1348 != -1)
  {
    AUDIO::STOP_SOUND(iLocal_1348);
    AUDIO::RELEASE_SOUND_ID(iLocal_1348);
    iLocal_1348 = -1;
  }
  if (iLocal_1429 != 0 && !ENTITY::DOES_ENTITY_EXIST(iLocal_1429))
  {
    func_45(24, 1);
    Global_76066[24] = 0;
  }
  func_597(0, 0);
  AUDIO::STOP_AUDIO_SCENES();
  func_31();
  func_30(0);
  STREAMING::SET_MODEL_AS_NO_LONGER_NEEDED(func_598(iLocal_1354));
}