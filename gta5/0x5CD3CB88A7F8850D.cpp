// barry3.ysc @ L35055
void func_243()
{
  if (func_234(iLocal_147, PLAYER::PLAYER_PED_ID(), 7f, 1))
  {
    if (!PED::IS_PED_HEADTRACKING_PED(iLocal_147, PLAYER::PLAYER_PED_ID()))
    {
      TASK::TASK_LOOK_AT_ENTITY(iLocal_147, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
    }
  }
  else if (AUDIO::IS_PED_IN_CURRENT_CONVERSATION(iLocal_147))
  {
    if (!PED::IS_PED_HEADTRACKING_PED(iLocal_147, PLAYER::PLAYER_PED_ID()))
    {
      TASK::TASK_LOOK_AT_ENTITY(iLocal_147, PLAYER::PLAYER_PED_ID(), -1, 2048, 2);
    }
  }
  else if (PED::IS_PED_HEADTRACKING_PED(iLocal_147, PLAYER::PLAYER_PED_ID()))
  {
    TASK::TASK_CLEAR_LOOK_AT(iLocal_147);
  }
  if (func_234(iLocal_147, PLAYER::PLAYER_PED_ID(), 6f, 1))
  {
    if (!PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), iLocal_147))
    {
      TASK::TASK_LOOK_AT_ENTITY(PLAYER::PLAYER_PED_ID(), iLocal_147, -1, 0, 2);
    }
  }
  else if (PED::IS_PED_HEADTRACKING_PED(PLAYER::PLAYER_PED_ID(), iLocal_147))
  {
    TASK::TASK_CLEAR_LOOK_AT(PLAYER::PLAYER_PED_ID());
  }
}