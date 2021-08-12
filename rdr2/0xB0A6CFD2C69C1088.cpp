// beechers2_2.ysc @ L52849
void func_1226()
{
  if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(Global_35))
  {
    TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(Global_35, "IsPlayer", true);
    TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "progress", fLocal_1068);
    TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "effort", fLocal_1068);
    TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "stage", fLocal_1073);
    TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(Global_35, "BeatHit", fLocal_1076);
  }
  if (TASK::IS_TASK_MOVE_NETWORK_ACTIVE(vLocal_808[2 /*3*/]))
  {
    TASK::SET_TASK_MOVE_NETWORK_SIGNAL_BOOL(vLocal_808[2 /*3*/], "IsPlayer", false);
    TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(vLocal_808[2 /*3*/], "progress", fLocal_1068);
    TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(vLocal_808[2 /*3*/], "effort", fLocal_1068);
    TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(vLocal_808[2 /*3*/], "stage", fLocal_1073);
    TASK::SET_TASK_MOVE_NETWORK_SIGNAL_FLOAT(vLocal_808[2 /*3*/], "BeatHit", fLocal_1076);
  }
}