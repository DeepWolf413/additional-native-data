// loanshark_womancry.ysc @ L3052
void func_74()
{
  if (((func_63(uLocal_979[0], 0) && !TASK::IS_PED_CUFFED(uLocal_979[0])) && iLocal_18 != 3) && TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1261))
  {
    func_190(2, 0);
    func_329(5000);
    PED::_0x89F5E7ADECCCB49C(uLocal_979[0], "sad");
    TASK::_TASK_USE_SCENARIO_POINT(uLocal_979[0], iLocal_1261, "", 0, true, false, 0, false, -1f, false);
    func_133(&uLocal_1445, 1);
    func_123(&uLocal_1445, 1);
    func_134(&uLocal_1445, 0);
    func_230(8);
    func_65(32);
  }
  else if (!TASK::_DOES_SCENARIO_POINT_EXIST(iLocal_1261))
  {
  }
}