// am_beach_washup_cinematic.ysc @ L326
void func_16(var uParam0)
{
  int iVar0;
  
  iVar0 = NETWORK::_NETWORK_CONVERT_SYNCHRONISED_SCENE_TO_SYNCHRONIZED_SCENE(uParam0->f_5);
  if (PED::GET_SYNCHRONIZED_SCENE_PHASE(iVar0) >= 0.9f)
  {
    NETWORK::NETWORK_STOP_SYNCHRONISED_SCENE(uParam0->f_5);
    CAM::RENDER_SCRIPT_CAMS(false, true, 3000, true, false, 0);
    PLAYER::SIMULATE_PLAYER_INPUT_GAIT(PLAYER::PLAYER_ID(), 1f, 2000, 0f, true, false);
    func_17(uParam0, 2);
  }
}