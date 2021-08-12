// fm_bj_race_controler.ysc @ L324647
void func_4550(var uParam0, var uParam1)
{
  float fVar0;
  
  if (func_3852(uParam0) > 1)
  {
    fVar0 = 42f;
  }
  else
  {
    fVar0 = 30f;
  }
  if (fVar0 != uParam1->f_3860)
  {
    if (PED::IS_PED_IN_ANY_VEHICLE(NETWORK::NET_TO_PED(uParam0->f_834), false))
    {
      TASK::SET_DRIVE_TASK_CRUISE_SPEED(NETWORK::NET_TO_PED(uParam0->f_834), fVar0);
      uParam1->f_3860 = fVar0;
    }
  }
}