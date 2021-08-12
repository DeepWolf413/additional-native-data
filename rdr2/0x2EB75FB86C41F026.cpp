// ambush_exc_bridge_trap.ysc @ L1651
void func_49()
{
  MAP::DISPLAY_RADAR(true);
  PLAYER::SET_PLAYER_CONTROL(PLAYER::PLAYER_ID(), true, 0, false);
  if (!ENTITY::IS_ENTITY_DEAD(Local_15.f_56))
  {
    PED::SET_PED_CONFIG_FLAG(Local_15.f_56, 301, false);
    PED::_0x2EB75FB86C41F026(Local_15.f_56, 3, 1);
    PED::_0x58F7DB5BD8FA2288(Local_15.f_56);
    TASK::CLEAR_PED_SECONDARY_TASK(Local_15.f_56);
    func_200(Local_15.f_56, 0);
  }
  func_156();
}