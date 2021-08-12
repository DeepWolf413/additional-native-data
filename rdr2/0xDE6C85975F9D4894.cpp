// saint_denis1.ysc @ L88992
void func_2309(char[4] cParam0)
{
  int iVar0;

  PED::SET_PED_RESET_FLAG(Global_35, 159, true);
  CAM::_0xC252C0CC969AF79A(1);
  if (!func_195(iLocal_1759, 33554432) || PLAYER::_0xDE6C85975F9D4894(PLAYER::PLAYER_ID()))
  {
    if ((ANIMSCENE::_IS_ANIM_SCENE_STARTED(uLocal_1769[33], false) && (ANIMSCENE::_GET_ANIM_SCENE_TIME(uLocal_1769[33]) >= 3f || ANIMSCENE::_0x005E6F28DD7ED58D(uLocal_1769[33], "ARTHUR"))) || ANIMSCENE::_0xB89FCFF19DAFFF28(uLocal_1769[33], "ARTHUR"))
    {
      func_1558(1);
      iVar0 = func_1183(Global_35, 0, 1, 0);
      if (iVar0 == joaat("WEAPON_UNARMED"))
      {
        WEAPON::SET_CURRENT_PED_WEAPON(Global_35, joaat("WEAPON_REVOLVER_CATTLEMAN"), false, 0, false, false);
      }
      PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true, 0, -1, false);
      if (!func_195(iLocal_1763, 1048576))
      {
        func_237(&uLocal_2133);
        func_408(&iLocal_1763, 1048576);
      }
      if (func_238(&uLocal_2133) > 500)
      {
        PLAYER::_0x1D77B47AFA584E90(PLAYER::PLAYER_ID(), -1, true);
        PLAYER::_0xBBA140062B15A8AC(PLAYER::PLAYER_ID());
        AUDIO::SET_AUDIO_FLAG("AllowScriptedSpeechInSlowMo", true);
        PLAYER::_0x22B3CABEDDB538B2(PLAYER::PLAYER_ID(), 0.2f);
      }
      func_408(&iLocal_1759, 33554432);
    }
  }
}