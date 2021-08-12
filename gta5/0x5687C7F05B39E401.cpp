// am_casino_peds.ysc @ L7210
void func_60(int iParam0, var uParam1, char* sParam2, char* sParam3, bool bParam4)
{
  if (bParam4)
  {
    PED::_SET_FACIAL_CLIPSET_OVERRIDE(*uParam1, sParam2);
    PED::SET_FACIAL_IDLE_ANIM_OVERRIDE(*uParam1, sParam3, 0);
  }
  else
  {
    TASK::TASK_PLAY_ANIM(*uParam1, sParam2, sParam3, 8f, -8f, -1, 33, 0f, false, false, false);
  }
  uParam1->f_20 = MISC::GET_GAME_TIMER();
  uParam1->f_19 = SYSTEM::FLOOR((ENTITY::GET_ANIM_DURATION(sParam2, sParam3) * 1000f));
}