// am_bru_box.ysc @ L9050
int func_234(struct<21> Param0)
{
  func_238(func_239(Param0), Param0);
  NETWORK::RESERVE_NETWORK_MISSION_OBJECTS(1);
  func_236(0, -1, 0);
  NETWORK::NETWORK_REGISTER_HOST_BROADCAST_VARIABLES(&Local_60, 11);
  NETWORK::NETWORK_REGISTER_PLAYER_BROADCAST_VARIABLES(&Local_71, 97);
  if (!func_235())
  {
    return 0;
  }
  MISC::SET_THIS_SCRIPT_CAN_BE_PAUSED(false);
  if (NETWORK::NETWORK_IS_HOST_OF_THIS_SCRIPT())
  {
    Local_60.f_7 = Param0.f_16;
    Global_1390635 = Local_60.f_7;
    Local_60.f_3 = { ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), false) };
    if (!func_4(Global_2544210.f_900.f_1))
    {
      MISC::SET_BIT(&(Local_60.f_1), 8);
    }
  }
  bLocal_173 = NETWORK::NETWORK_IS_IN_TUTORIAL_SESSION();
  Local_71[NETWORK::PARTICIPANT_ID_TO_INT() /*3*/] = 0;
  return 1;
}