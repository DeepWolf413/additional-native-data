// appcontacts.ysc @ L2543
void func_42(int iParam0)
{
  float fVar0;
  char* sVar1;
  
  MISC::SET_GAME_PAUSED(true);
  PAD::SET_INPUT_EXCLUSIVE(2, 201);
  fVar0 = 0f;
  while (!PAD::IS_CONTROL_JUST_PRESSED(2, 201) || fVar0 < 1f)
  {
    sVar1 = func_43(iParam0, 119);
    HUD::SET_WARNING_MESSAGE("FBR_GENERIC", 16384, 0, false, -1, "FBR_DIR_MODE", sVar1, true, 0);
    SYSTEM::WAIT(0);
    fVar0 = (fVar0 + MISC::GET_FRAME_TIME());
  }
  MISC::SET_GAME_PAUSED(false);
}