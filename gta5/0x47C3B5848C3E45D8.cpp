// finalea.ysc @ L50749
void func_469()
{
  CLOCK::SET_CLOCK_TIME(20, 45, 0);
  AUDIO::CANCEL_MUSIC_EVENT("FINA_CHASE");
  Local_3077[2 /*2*/] = PLAYER::PLAYER_PED_ID();
  while (!func_703(1663.725f, -1732.354f, 111.2844f, 18.3814f))
  {
    SYSTEM::WAIT(0);
  }
  while (!func_470(&(Local_3077[0 /*2*/]), 0, 1731.36f, -1621.64f, 111.43f, 188.9595f, 1, 0, 0))
  {
    SYSTEM::WAIT(0);
  }
  CUTSCENE::REQUEST_CUTSCENE("fin_a_ext", 8);
  func_227(0);
  if (func_738())
  {
    func_467(0, -1, 1);
  }
  else
  {
    ENTITY::FREEZE_ENTITY_POSITION(PLAYER::PLAYER_PED_ID(), false);
  }
}