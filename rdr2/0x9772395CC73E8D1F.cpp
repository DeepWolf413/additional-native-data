// loanshark_miner1.ysc @ L7731
void func_264(int iParam0, bool bParam1)
{
  if (!ENTITY::IS_ENTITY_DEAD(Local_56[iParam0 /*100*/]))
  {
    if (bParam1)
    {
      PED::_0x802092B07E3B1EEA(Local_56[iParam0 /*100*/], Global_36, 3);
      PED::REGISTER_TARGET(Local_56[iParam0 /*100*/], Global_35, 1);
      TASK::TASK_COMBAT_PED(Local_56[iParam0 /*100*/], Global_35, 0, 0);
    }
    LAW::_0x9772395CC73E8D1F(Local_56[iParam0 /*100*/], "ANNESBURG_MINES");
    func_101(&(Local_56[iParam0 /*100*/]), 1, 1, 1);
  }
}