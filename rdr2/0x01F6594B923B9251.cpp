// coachrobberies.ysc @ L13412
bool func_391(int iParam0)
{
  int iVar0;

  if (bLocal_2530)
  {
    if (func_26(&uLocal_2533) > 4f && func_183(iParam0, PLAYER::PLAYER_PED_ID(), 1, 1) < 30f)
    {
      return true;
    }
    return false;
  }
  if ((ENTITY::HAS_ENTITY_BEEN_DAMAGED_BY_ENTITY(iParam0, PLAYER::PLAYER_PED_ID(), 1, 1) && func_183(iParam0, PLAYER::PLAYER_PED_ID(), 1, 1) < 30f) && !FIRE::IS_ENTITY_ON_FIRE(iParam0))
  {
    bLocal_2530 = true;
    TASK::CLEAR_PED_TASKS(iParam0, true, false);
    PED::SET_PED_RAGDOLL_FORCE_FALL(iParam0);
    PED::_0xAAB050DA48B57978(iParam0, "TaskIntimidated_OnKnees", Global_35, -1, 4);
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    TASK::TASK_PAUSE(0, 1000);
    TASK::TASK_TURN_PED_TO_FACE_ENTITY(0, Global_35, -1, -1f, -1f, -1f);
    TASK::CLOSE_SEQUENCE_TASK(iVar0);
    TASK::TASK_PERFORM_SEQUENCE(iParam0, iVar0);
    TASK::CLEAR_SEQUENCE_TASK(&iVar0);
    func_100(&uLocal_2533);
  }
  return false;
}