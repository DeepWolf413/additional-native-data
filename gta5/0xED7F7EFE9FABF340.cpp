// agency_heist2.ysc @ L4235
void func_101()
{
  if (iLocal_247 != 4)
  {
    iLocal_248 = iLocal_247;
    iLocal_247 = 4;
    HUD::CLEAR_PRINTS();
    func_102();
    HUD::REMOVE_BLIP(&iLocal_84);
    PED::SET_PED_CAN_SWITCH_WEAPON(PLAYER::PLAYER_PED_ID(), true);
  }
  if (PLAYER::GET_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID()) == 0)
  {
    iLocal_247 = iLocal_248;
    HUD::CLEAR_PRINTS();
  }
}