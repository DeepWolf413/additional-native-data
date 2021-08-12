// mission_triggerer_b.ysc @ L116760
void func_967()
{
  if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
  {
    if (!CAM::IS_GAMEPLAY_HINT_ACTIVE())
    {
      if (func_968())
      {
        CAM::SET_GAMEPLAY_ENTITY_HINT(Global_95867.f_9[1], 0f, 0f, 0f, true, 60000, 2000, 2000, 0);
        CAM::SET_GAMEPLAY_HINT_FOV(fLocal_1097);
        CAM::SET_GAMEPLAY_HINT_FOLLOW_DISTANCE_SCALAR(fLocal_1098);
        CAM::SET_GAMEPLAY_HINT_BASE_ORBIT_PITCH_OFFSET(fLocal_1099);
        CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETX(fLocal_1100);
        CAM::_SET_GAMEPLAY_HINT_ANIM_OFFSETY(fLocal_1101);
        CAM::_SET_GAMEPLAY_HINT_ANIM_CLOSEUP(true);
        iLocal_1103 = MISC::GET_GAME_TIMER();
      }
    }
    else
    {
      CAM::_0xCCD078C2665D2973(true);
    }
  }
}