// finale1.ysc @ L60088
void func_1418(var uParam0)
{
  PAD::DISABLE_ALL_CONTROL_ACTIONS(0);
  PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE"), true);
  PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_FRONTEND_PAUSE_ALTERNATE"), true);
  PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_LR"), true);
  PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_LOOK_UD"), true);
  PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_AIM"), true);
  PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_ACTION"), true);
  PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY"), true);
  PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_PC"), true);
  PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_SPECIAL_ABILITY_SECONDARY"), true);
  PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_REVEAL_HUD"), true);
  if (func_1365(uParam0) != 29)
  {
    PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK"), true);
    PAD::ENABLE_CONTROL_ACTION(0, joaat("INPUT_ATTACK2"), true);
  }
  if (func_493(uLocal_425, 1048576))
  {
    if (((func_1389(&(vLocal_1539[2 /*3*/])) >= 1f && (PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_LOOK_LR")) || PAD::IS_CONTROL_PRESSED(0, joaat("INPUT_LOOK_UD")))) || func_1389(&(vLocal_1539[2 /*3*/])) >= 5f) || PED::IS_PED_IN_COVER(Local_225[4 /*9*/], false, false))
    {
      PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, Local_225[0 /*9*/], -1, false);
      PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), true, 0, -1, false);
      func_503(&uLocal_425, 1048576);
    }
  }
}