// fm_mission_controller.ysc @ L682219
void func_11314(bool bParam0)
{
  if (Global_4456448.f_131393 > 0)
  {
    func_11316();
  }
  bLocal_17316 = false;
  func_11315();
  PLAYER::_SPECIAL_ABILITY_DEPLETE(bLocal_3284, 0);
  Local_31280[bLocal_3288 /*292*/].f_178 = 0;
  GRAPHICS::ANIMPOSTFX_STOP("PPFilter");
  GRAPHICS::ANIMPOSTFX_STOP("MP_Bull_tost");
  if (bParam0)
  {
    PLAYER::_SPECIAL_ABILITY_DEPLETE(bLocal_3284, 0);
    AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", false);
    func_11320(0);
  }
  else
  {
    func_11320(1);
  }
}