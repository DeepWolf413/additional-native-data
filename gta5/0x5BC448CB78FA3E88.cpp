// assassin_bus.ysc @ L14915
void func_276(int iParam0)
{
  int iVar0;
  
  if (!ENTITY::IS_ENTITY_DEAD(iParam0, false))
  {
    if (TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 1 && TASK::GET_SCRIPT_TASK_STATUS(iParam0, 242628503) != 0)
    {
      if (func_231(iParam0, Local_1758, 1) <= 50f)
      {
        TASK::CLEAR_SEQUENCE_TASK(&iVar0);
        TASK::OPEN_SEQUENCE_TASK(&iVar0);
        TASK::TASK_GO_TO_COORD_ANY_MEANS(0, Local_1758, 2f, 0, false, 786603, -1f);
        TASK::TASK_SMART_FLEE_PED(0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
        TASK::CLOSE_SEQUENCE_TASK(iVar0);
        TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
        TASK::CLEAR_SEQUENCE_TASK(&iVar0);
      }
      else
      {
        TASK::TASK_SMART_FLEE_PED(iParam0, PLAYER::PLAYER_PED_ID(), 500f, -1, false, false);
      }
      iLocal_1461 = 6;
    }
  }
}