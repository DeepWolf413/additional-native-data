// re_drunkdriver.ysc @ L7008
void func_136()
{
  if (func_2() && iLocal_111 < 2)
  {
    if ((PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) > 0 && PLAYER::GET_TIME_SINCE_PLAYER_HIT_VEHICLE(PLAYER::PLAYER_ID()) < 100) || ENTITY::HAS_ENTITY_COLLIDED_WITH_ANYTHING(PED::GET_VEHICLE_PED_IS_IN(PLAYER::PLAYER_PED_ID(), false)))
    {
      if (!func_33("REDR1_SWV"))
      {
        func_5(0);
        func_68();
        SYSTEM::WAIT(0);
        func_67(&uLocal_173, "REDR1AU", "REDR1_SWV", 4, 0, 0, 0);
        iLocal_163 += 6;
      }
    }
    func_137(Local_160, (MISC::GET_GAME_TIMER() - iLocal_159));
  }
  if (iLocal_163 > 17)
  {
    iLocal_109 = 1;
  }
}