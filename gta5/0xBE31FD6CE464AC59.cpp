// assassin_hooker.ysc @ L18873
void func_372()
{
  while (!func_268())
  {
    SYSTEM::WAIT(0);
  }
  while (!func_206())
  {
    SYSTEM::WAIT(0);
  }
  MISC::CLEAR_AREA_OF_PEDS(-607.262f, -1800.9f, 22.3211f, 10f, 0);
  func_359();
  func_263(&Local_1685, &Local_1045, 0);
  func_235(&Local_1045, 1);
  func_267(&Local_1045, &iLocal_2525);
  AUDIO::TRIGGER_MUSIC_EVENT("ASS3_RESTART1");
  CAM::SET_GAMEPLAY_CAM_RELATIVE_HEADING(0f);
  CAM::SET_GAMEPLAY_CAM_RELATIVE_PITCH(0f, 1f);
  func_364(0, -1, 1);
  func_362(500);
  iLocal_1461 = 0;
  iLocal_1042 = 10;
}