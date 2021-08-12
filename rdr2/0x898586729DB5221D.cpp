// beechers2_2.ysc @ L53059
void func_1232(char* sParam0, int iParam1, int iParam2, bool bParam3)
{
  struct<31> Var0;

  Var0.f_6 = -1082130432;
  Var0.f_9 = -1082130432;
  Var0.f_30 = sParam0;
  Var0.f_1 = joaat("DEFAULT");
  Var0 = 411497472;
  TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(Global_35, func_446(100), &Var0, func_1234(iParam1), func_1234(iParam2), 2, 0, 0, 0, 131200, 0);
  Var0.f_1 = joaat("DEFAULT");
  Var0 = -557541908;
  TASK::CLEAR_PED_TASKS_IMMEDIATELY(vLocal_808[2 /*3*/], false, true);
  TASK::TASK_MOVE_NETWORK_ADVANCED_BY_NAME_WITH_INIT_PARAMS(vLocal_808[2 /*3*/], func_446(100), &Var0, func_1234(iParam1), func_1234(iParam2), 2, 0, 0, 0, 131200, 0);
  if (bParam3)
  {
    PED::_0x2208438012482A1A(Global_35, true, false);
    PED::_0x2208438012482A1A(vLocal_808[2 /*3*/], true, false);
    ENTITY::_0x898586729DB5221D(Global_35);
    ENTITY::_0x898586729DB5221D(vLocal_808[2 /*3*/]);
  }
}