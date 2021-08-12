// am_beach_washup_cinematic.ysc @ L360
void func_19(var uParam0)
{
  char* sVar0;
  
  sVar0 = func_20();
  uParam0->f_5 = NETWORK::NETWORK_CREATE_SYNCHRONISED_SCENE(uParam0->f_1, 0f, 0f, uParam0->f_4, 2, false, false, 1f, 0f, 1f);
  NETWORK::NETWORK_ADD_PED_TO_SYNCHRONISED_SCENE(PLAYER::PLAYER_PED_ID(), uParam0->f_5, sVar0, "action", 1000f, -1.5f, 0, 0, 1000f, 0);
  NETWORK::NETWORK_START_SYNCHRONISED_SCENE(uParam0->f_5);
  PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(PLAYER::PLAYER_PED_ID(), "HS4F_IG25_BEACH", 0);
  PED::FORCE_PED_AI_AND_ANIMATION_UPDATE(PLAYER::PLAYER_PED_ID(), false, false);
  uParam0->f_6 = CAM::CREATE_CAMERA(964613260, true);
  CAM::PLAY_CAM_ANIM(uParam0->f_6, "action_camera", sVar0, uParam0->f_1, 0f, 0f, uParam0->f_4, false, 2);
  CAM::RENDER_SCRIPT_CAMS(true, false, 3000, true, false, 0);
  STREAMING::REMOVE_ANIM_DICT(sVar0);
}