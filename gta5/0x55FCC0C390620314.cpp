// am_hunt_the_beast.ysc @ L106717
void func_571(bool bParam0)
{
  int iVar0;
  
  if (MISC::IS_BIT_SET(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_101, bParam0))
  {
    iVar0 = PLAYER::GET_PLAYER_PED(bParam0);
    PED::SET_PED_CAN_BE_TARGETTED_BY_PLAYER(iVar0, PLAYER::PLAYER_ID(), true);
    PLAYER::_0x55FCC0C390620314(PLAYER::PLAYER_ID(), bParam0, 1);
    PLAYER::_0x55FCC0C390620314(bParam0, PLAYER::PLAYER_ID(), 1);
    func_572(1, bParam0);
    MISC::CLEAR_BIT(&(Global_1630816[PLAYER::PLAYER_ID() /*597*/].f_11.f_101), bParam0);
  }
}