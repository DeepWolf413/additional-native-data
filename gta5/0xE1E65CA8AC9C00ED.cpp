// am_mp_arcade_strength_test.ysc @ L6431
void func_215(int iParam0)
{
  char* sVar0;
  
  sVar0 = func_216(iParam0);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sVar0))
  {
    if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), &(Global_1710057.f_47), sVar0, 3))
    {
      PED::PLAY_FACIAL_ANIM(PLAYER::PLAYER_PED_ID(), sVar0, &(Global_1710057.f_47));
    }
  }
}