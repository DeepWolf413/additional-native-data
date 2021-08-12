// rcm_exconfed11.ysc @ L31575
void func_970(bool bParam0, int iParam1)
{
  int iVar0;
  vector3 vVar1;
  int iVar4;

  if (!ENTITY::IS_ENTITY_DEAD(bParam0->f_283) && !PED::IS_PED_FATALLY_INJURED(bParam0->f_283))
  {
    if (func_811(bParam0->f_283, bParam0->f_214[iParam1 /*3*/], 1f, 1, 1))
    {
      TASK::TASK_COMBAT_HATED_TARGETS_AROUND_PED(bParam0->f_283, 200f, 0, 0);
      return;
    }
    bParam0->f_283.f_7 = iParam1;
    func_1322(bParam0->f_283, bParam0->f_214[iParam1 /*3*/], 1.5f, 1, 0);
    iVar0 = func_1594(iParam1);
    vVar1 = { bParam0->f_1039[iVar0 /*8*/].f_1 };
    TASK::OPEN_SEQUENCE_TASK(&iVar4);
    TASK::CLEAR_PED_TASKS_IMMEDIATELY(0, false, true);
    if (PED::IS_PED_ON_MOUNT(bParam0->f_283))
    {
      TASK::TASK_DISMOUNT_ANIMAL(0, 1, 0, 0, 0, 0);
    }
    TASK::TASK_GO_TO_COORD_AND_AIM_AT_HATED_ENTITIES_NEAR_COORD_USING_COMBAT_STYLE(0, vVar1, vVar1, 2f, 0, 3f, 4f, 1, 6291456, 0, joaat("FIRING_PATTERN_BURST_FIRE"));
    TASK::TASK_PUT_PED_DIRECTLY_INTO_COVER(0, vVar1, 500, 1, 0f, 0, 0, bParam0->f_1039[iVar0 /*8*/], 1, 0, 0);
    TASK::TASK_COMBAT_HATED_TARGETS(0, -1f);
    func_829(bParam0->f_283, &iVar4, 0, 0, 1, 1);
  }
}