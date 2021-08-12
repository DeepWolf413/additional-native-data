// beat_arms_deal.ysc @ L9764
void func_295(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
  int iVar0;

  if (ENTITY::IS_ENTITY_DEAD(iLocal_35[iParam0]))
  {
    return;
  }
  if (ANIMSCENE::_DOES_ANIM_SCENE_EXIST(Local_528.f_1) && ANIMSCENE::_IS_ANIM_SCENE_STARTED(Local_528.f_1, false))
  {
    ANIMSCENE::REMOVE_ANIM_SCENE_ENTITY(Local_528.f_1, func_343(iLocal_35[iParam0]), iLocal_35[iParam0]);
  }
  if (bParam2)
  {
    PED::FORCE_PED_MOTION_STATE(iLocal_35[iParam0], joaat("MOTIONSTATE_WALK"), false, 0, false);
  }
  if (func_34(iParam1, 0, 1))
  {
    TASK::OPEN_SEQUENCE_TASK(&iVar0);
    if (bParam4)
    {
      TASK::TASK_REACT(0, Global_35, Global_36, "Default_Panic", uLocal_1259[iParam0], 0, 4);
    }
    TASK::TASK_MOUNT_ANIMAL(0, iParam1, -1, -1, iParam3, 1, 0, 0);
    func_212(iLocal_35[iParam0], &iVar0, 0, 0, 1, 1);
  }
  else
  {
    func_504(iLocal_35[iParam0], 2, Global_35, 0);
  }
  PED::SET_PED_KEEP_TASK(iLocal_35[iParam0], true);
}