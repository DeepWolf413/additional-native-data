// agency_heist3a.ysc @ L124910
void func_918()
{
  float fVar0;
  
  STREAMING::REQUEST_ANIM_DICT("missheist_agency3ashield_face");
  if (func_919())
  {
    if (STREAMING::HAS_ANIM_DICT_LOADED("missheist_agency3ashield_face"))
    {
      fVar0 = TASK::GET_PED_DESIRED_MOVE_BLEND_RATIO(PLAYER::PLAYER_PED_ID());
      if (TASK::IS_MOVE_BLEND_RATIO_STILL(fVar0) || TASK::IS_MOVE_BLEND_RATIO_WALKING(fVar0))
      {
        if (func_3(&iLocal_4891, 7000))
        {
          if (!ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheist_agency3ashield_face", "Shield_Face_Player1", 3))
          {
            TASK::TASK_PLAY_ANIM(PLAYER::PLAYER_PED_ID(), "missheist_agency3ashield_face", "Shield_Face_Player1", 2f, -2f, -1, 48, 0f, false, false, false);
            iLocal_4891 = MISC::GET_GAME_TIMER();
          }
        }
      }
      else if (ENTITY::IS_ENTITY_PLAYING_ANIM(PLAYER::PLAYER_PED_ID(), "missheist_agency3ashield_face", "Shield_Face_Player1", 3))
      {
        TASK::STOP_ANIM_TASK(PLAYER::PLAYER_PED_ID(), "missheist_agency3ashield_face", "Shield_Face_Player1", -4f);
      }
    }
  }
}