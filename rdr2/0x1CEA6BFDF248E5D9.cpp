// mob2.ysc @ L36727
int func_786(var uParam0)
{
  ENTITY::REMOVE_MODEL_HIDE(2698.51f, -1061.01f, 47.24f, 2f, joaat("P_DOOR48X"), 1);
  if (AUDIO::IS_AUDIO_SCENE_ACTIVE("MOB2_Investigate_Noise_Scene"))
  {
    AUDIO::STOP_AUDIO_SCENE("MOB2_Investigate_Noise_Scene");
  }
  func_183();
  func_184();
  PED::_0x949B2F9ED2917F5D(Global_35, 2);
  MAP::DISPLAY_RADAR(true);
  HUD::DISPLAY_HUD(true);
  func_461();
  func_191();
  func_475(&iLocal_1619);
  func_460(&(Local_14.f_34), 0);
  func_478(&(Local_14.f_104));
  TASK::REMOVE_COVER_POINT(iLocal_1575[0]);
  TASK::REMOVE_COVER_POINT(iLocal_1575[1]);
  if (!PAD::IS_CONTROL_ENABLED(0, joaat("INPUT_CONTEXT_X")))
  {
    PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_CONTEXT_X"), true);
  }
  func_450();
  return 1;
}