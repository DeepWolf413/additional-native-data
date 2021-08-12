// av_animal_attack.ysc @ L3063
void func_70(var uParam0)
{
  int iVar0;

  PED::_0x89F5E7ADECCCB49C(uParam0->f_20[1 /*14*/], "default");
  TASK::OPEN_SEQUENCE_TASK(&iVar0);
  if (*uParam0 == 36)
  {
    TASK::TASK_COMBAT_PED(0, uParam0->f_20[0 /*14*/], 0, 0);
  }
  else
  {
    TASK::TASK_GRAPPLE(0, uParam0->f_20[0 /*14*/], iLocal_15, 1, 2f, 0, 0);
  }
  if (*uParam0 == 36)
  {
    TASK::TASK_SET_BLOCKING_OF_NON_TEMPORARY_EVENTS(0, false);
  }
  if (*uParam0 != 45)
  {
    TASK::TASK_EAT(0, uParam0->f_20[0 /*14*/], 0);
  }
  TASK::CLOSE_SEQUENCE_TASK(iVar0);
  TASK::TASK_PERFORM_SEQUENCE(uParam0->f_20[1 /*14*/], iVar0);
  PED::SET_PED_CONFIG_FLAG(uParam0->f_20[1 /*14*/], 168, true);
  PED::SET_PED_KEEP_TASK(uParam0->f_20[1 /*14*/], true);
  TASK::CLEAR_SEQUENCE_TASK(&iVar0);
}