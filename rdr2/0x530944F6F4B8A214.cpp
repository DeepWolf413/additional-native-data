// reverend1.ysc @ L53557
bool func_1326()
{
  int iVar0;

  if (PED::_IS_PED_CARRYING(Global_35))
  {
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_LR"), false);
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MOVE_UD"), false);
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_SPRINT"), false);
    PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_JUMP"), false);
    if (PED::IS_PED_STOPPED(Global_35))
    {
      iVar0 = PED::_GET_FIRST_ENTITY_PED_IS_CARRYING(Global_35);
      if (!ENTITY::DOES_ENTITY_EXIST(iVar0))
      {
        PLAYER::_0xD1A70C1E8D1031FE(PLAYER::PLAYER_ID(), 0);
        return true;
      }
      if (!func_1811(Global_35, -208384378))
      {
        TASK::TASK_PLACE_CARRIED_ENTITY_AT_COORD(Global_35, iVar0, ENTITY::GET_OFFSET_FROM_ENTITY_IN_WORLD_COORDS(Global_35, 0f, 0.5f, 0f), 1f, 0);
      }
    }
  }
  else
  {
    PLAYER::_0xD1A70C1E8D1031FE(PLAYER::PLAYER_ID(), 0);
    return true;
  }
  return false;
}