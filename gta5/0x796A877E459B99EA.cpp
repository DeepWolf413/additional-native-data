// franklin1.ysc @ L19584
void func_277(int iParam0)
{
  if (iParam0 < 3)
  {
    VEHICLE::SET_BOAT_ANCHOR(Local_1115[iParam0 /*13*/], false);
    VEHICLE::START_PLAYBACK_RECORDED_VEHICLE(Local_1115[iParam0 /*13*/], Local_1115[iParam0 /*13*/].f_7, sLocal_312, true);
    VEHICLE::_0x796A877E459B99EA(Local_1115[iParam0 /*13*/], 1f, 0f, 0f);
    VEHICLE::SKIP_TIME_IN_PLAYBACK_RECORDED_VEHICLE(Local_1115[iParam0 /*13*/], 1000f);
    VEHICLE::SET_PLAYBACK_SPEED(Local_1115[iParam0 /*13*/], 1.15f);
  }
}