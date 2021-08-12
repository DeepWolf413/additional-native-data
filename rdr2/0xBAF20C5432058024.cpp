// beat_dark_alley_bum.ysc @ L5193
void func_141()
{
  PED::SET_PED_CAN_PLAY_GESTURE_ANIMS(uLocal_689[0], 0, 1);
  if ((Local_389.f_46 == 0 && !func_50(iLocal_718, 536870912)) && !AUDIO::IS_ANY_SPEECH_PLAYING(uLocal_689[0]))
  {
    if (ENTITY::HAS_ANIM_EVENT_FIRED(uLocal_689[0], 663533857))
    {
      switch (iLocal_722)
      {
        case 0:
          func_149(uLocal_689[0], uLocal_689[0], func_148("POST_IDLE"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
          break;
        case 1:
          func_149(uLocal_689[0], uLocal_689[0], func_148("POST_IDLE_B"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
          break;
        case 2:
          func_149(uLocal_689[0], uLocal_689[0], func_148("POST_IDLE_C"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
          break;
        case 3:
          func_149(uLocal_689[0], uLocal_689[0], func_148("POST_IDLE_D"), 0, -1082130432 /* Float: -1f */, 0, 0, 0, 1, 1, 1, 291934926, 1, 0, 0);
          break;
      }
      iLocal_722++;
    }
  }
}