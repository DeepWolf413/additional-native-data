// beat_checkpoint.ysc @ L7743
void func_207()
{
  int iVar0;
  int iVar1;
  int iVar2;

  iVar0 = 1;
  while (iVar0 <= 3)
  {
    if (!ENTITY::IS_ENTITY_DEAD(uLocal_810[iVar0]))
    {
      iVar2 = PED::GET_MOUNT(uLocal_810[iVar0]);
      TASK::OPEN_SEQUENCE_TASK(&iVar1);
      if (!ENTITY::IS_ENTITY_DEAD(iVar2))
      {
        TASK::TASK_MOUNT_ANIMAL(0, iVar2, 20000, -1, 2f, 1, 0, 0);
      }
      TASK::TASK_WANDER_STANDARD(0, 40000f, 0);
      TASK::CLOSE_SEQUENCE_TASK(iVar1);
      TASK::TASK_PERFORM_SEQUENCE(uLocal_810[iVar0], iVar1);
      TASK::CLEAR_SEQUENCE_TASK(&iVar1);
      PED::SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(uLocal_810[iVar0], false);
      func_414(&(iLocal_1337[iVar0]));
    }
    iVar0++;
  }
  PED::SET_RELATIONSHIP_BETWEEN_GROUPS(6, iLocal_1350, joaat("PLAYER"));
}