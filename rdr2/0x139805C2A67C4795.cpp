// braithwaites1.ysc @ L60978
void func_1375(bool bParam0)
{
  struct<31> Var0;
  struct<31> Var34;

  fLocal_2073 = 0.5f;
  Var0.f_6 = -1082130432;
  Var0.f_9 = -1082130432;
  Var0.f_30 = "BothArmsDown";
  TASK::TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(Global_35, func_526(73), &Var0, 0f, false, 0, 0);
  if (bParam0)
  {
    PED::_0x2208438012482A1A(Global_35, true, false);
  }
  if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
  {
    TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "rotation", fLocal_2073);
    TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "sloppiness", fLocal_2074);
  }
  Var34.f_6 = -1082130432;
  Var34.f_9 = -1082130432;
  Var34.f_30 = "BothArmsDown";
  func_1321(21, 1);
  TASK::TASK_MOVE_NETWORK_BY_NAME_WITH_INIT_PARAMS(Local_1692[21 /*2*/], func_526(74), &Var34, 0f, false, 0, 0);
  ENTITY::FORCE_ENTITY_AI_AND_ANIMATION_UPDATE(Local_1692[21 /*2*/], true);
  fLocal_2066 = 0f;
}