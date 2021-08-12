// gang2.ysc @ L54658
void func_1338()
{
  if (bLocal_1057)
  {
    if (!func_26(&uLocal_1155))
    {
      func_213(&uLocal_1155);
    }
    else if (((func_919(&uLocal_1155) > 5f || PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_LOOK_UD")) > 0f) || PAD::GET_CONTROL_NORMAL(0, joaat("INPUT_LOOK_LR")) > 0f) || PED::IS_PED_SHOOTING(Global_35))
    {
      PLAYER::SET_PLAYER_SIMULATE_AIMING(PLAYER::PLAYER_ID(), true);
      PLAYER::SET_PLAYER_FORCED_AIM(PLAYER::PLAYER_ID(), false, 0, -1, false);
      bLocal_1057 = false;
    }
  }
}