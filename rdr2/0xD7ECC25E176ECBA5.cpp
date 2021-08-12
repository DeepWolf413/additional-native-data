// ambush_inb_harass.ysc @ L4299
int func_154()
{
  float fVar0;

  fVar0 = func_202(Local_15[0], Global_36, 1);
  if (fVar0 < 60f && ENTITY::HAS_ENTITY_CLEAR_LOS_TO_ENTITY(Local_15[0], Global_35, 17))
  {
    return 1;
  }
  else if (fVar0 < 75f)
  {
    if (!func_173(&Local_274, 1048576))
    {
      if (PLAYER::GET_PLAYER_CURRENT_STEALTH_NOISE(PLAYER::PLAYER_ID()) > 5f)
      {
        PED::_SET_PED_CROUCH_MOVEMENT(Local_15[0], false, 0, false);
        TASK::TASK_TURN_PED_TO_FACE_ENTITY(Local_15[0], Global_35, -1, -1f, -1f, -1f);
        func_181(Local_15[0], Global_35, "RE_HAT_RKR_V1_TARGETSPOT_INT", 1117782016 /* Float: 80f */, 0, 1744022339, 1, 0);
        func_200(&Local_274, 1048576);
      }
    }
  }
  return 0;
}