// triathlonsp.ysc @ L95789
void func_565(int* iParam0)
{
  int iVar0;
  int iVar1;
  float fVar2;
  
  if (!func_325(16777216))
  {
    iVar0 = func_387() + 1;
    iVar1 = iParam0->f_1735[0 /*206*/].f_11;
    if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask", 3))
    {
      fVar2 = ENTITY::GET_ENTITY_ANIM_CURRENT_TIME(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask");
      if (fVar2 >= 0.457f)
      {
        PED::KNOCK_OFF_PED_PROP(PLAYER::PLAYER_PED_ID(), false, true, true, true);
        func_338(16777216);
      }
    }
    if ((iVar1 >= iVar0 && !ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask", 3)) && !PED::IS_PED_SWIMMING(PLAYER::PLAYER_PED_ID()))
    {
      TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missfbi4", "takeoff_mask", 8f, -8f, -1, 48, 0f, false, false, false);
    }
  }
}