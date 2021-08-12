// loanshark_sellhorse1.ysc @ L2030
void func_63(int iParam0)
{
  PLAYER::SET_PLAYER_CONTROL(PLAYER::GET_PLAYER_INDEX(), true, 0, false);
  ENTITY::SET_ENTITY_IS_TARGET_PRIORITY(Local_90[0 /*34*/], true, 0f);
  ENTITY::CLEAR_ENTITY_LAST_DAMAGE_ENTITY(Local_90[0 /*34*/]);
  func_212(Local_90[0 /*34*/]);
  TASK::_TASK_INTIMIDATED_2(Local_90[0 /*34*/], Global_35, 0, 1, 1, iParam0, 0, 1, 196610);
  PED::_0xC163DAC52AC975D3(Local_90[0 /*34*/], 31);
  PED::_0xB8DE69D9473B7593(Global_35, 31);
  PED::_0xB8DE69D9473B7593(Global_35, 3);
  PED::_0xB8DE69D9473B7593(Global_35, 4);
  TASK::_0x41D1331AFAD5A091(Local_90[0 /*34*/], 1, 0);
  PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 315, false);
  PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 130, false);
  PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 301, false);
  PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 331, false);
  PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 297, false);
  PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 351, true);
  PED::SET_PED_CONFIG_FLAG(Local_90[0 /*34*/], 452, true);
  PED::_0x2208438012482A1A(Local_90[0 /*34*/], false, false);
}