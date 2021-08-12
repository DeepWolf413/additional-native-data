// loanshark_sellhorse1.ysc @ L11874
void func_348(char* sParam0)
{
  int iVar0;

  if (func_339(sParam0))
  {
    iVar0 = AUDIO::GET_CURRENT_SCRIPTED_CONVERSATION_LINE(sParam0);
    if (AUDIO::_0x254B0241E964B450(sParam0, iVar0) == Local_90[0 /*34*/])
    {
      PAD::DISABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), false);
      PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 7, 0, 1);
      PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 20, 2, 1);
    }
    else
    {
      PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_GRAPPLE_ATTACK"), true);
      PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_MELEE_ATTACK"), true);
      PED::SET_PED_RESET_FLAG(Global_35, 337, true);
      PED::SET_PED_RESET_FLAG(Global_35, 338, true);
      PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 7, 0, 1);
      PLAYER::_0xA3DB37EDF9A74635(PLAYER::PLAYER_ID(), Local_90[0 /*34*/], 20, 2, 0);
    }
  }
}