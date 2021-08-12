// tuner_sandbox_activity.ysc @ L41400
void func_1173(int iParam0)
{
  int iVar0;
  
  if (func_239())
  {
    func_562(-1027218631, iParam0, &iVar0, 0, 1, 0);
    StringCopy(&(Global_4265506[iVar0 /*85*/].f_14.f_26), "tuner_sandbox_activity", 32);
  }
  else
  {
    MONEY::NETWORK_EARN_FROM_JOB(iParam0, "tuner_sandbox_activity");
  }
}