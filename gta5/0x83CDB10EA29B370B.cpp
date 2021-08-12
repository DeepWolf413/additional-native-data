// business_battles.ysc @ L241660
void func_3759(int iParam0)
{
  struct<3> Var0;
  struct<3> Var3;
  
  if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "dial_turn_anti_fast", 3))
  {
    Var0 = { ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(iParam0, Local_220) };
    Var3 = { 0f, 0f, ENTITY::GET_ENTITY_HEADING(iParam0) };
    TASK::TASK_PLAY_ANIM_ADVANCED(PLAYER::PLAYER_PED_ID(), "mini@safe_cracking", "dial_turn_anti_fast", Var0, Var3, 4f, 0.1f, -1, 1835009, 0f, 2, 0);
  }
}