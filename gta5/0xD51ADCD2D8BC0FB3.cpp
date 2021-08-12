// agency_heist3b.ysc @ L119325
void func_832(var uParam0, struct<3> Param1, int iParam4)
{
  int iVar0;
  int iVar1;
  int iVar2;
  int iVar3;
  
  CAM::SET_CINEMATIC_BUTTON_ACTIVE(false);
  iVar0 = uParam0->f_9;
  iVar1 = uParam0->f_10;
  if (iParam4 == 1726668277)
  {
    if (iVar0 < 1500)
    {
      iVar0 = 1500;
    }
    if (iVar1 < 1500)
    {
      iVar1 = 1500;
    }
  }
  CAM::SET_GAMEPLAY_COORD_HINT(Param1, -1, iVar0, iVar1, iParam4);
  iVar2 = 2048;
  iVar3 = 3;
  TASK::TASK_LOOK_AT_COORD(PLAYER::PLAYER_PED_ID(), Param1, -1, iVar2, iVar3);
  GRAPHICS::ANIMPOSTFX_PLAY("FocusIn", 0, false);
  AUDIO::START_AUDIO_SCENE("HINT_CAM_SCENE");
  AUDIO::PLAY_SOUND_FRONTEND(-1, "FocusIn", "HintCamSounds", true);
  uParam0->f_11 = 1;
  uParam0->f_8 = MISC::GET_GAME_TIMER();
  uParam0->f_1 = 1;
  *uParam0 = 0;
}