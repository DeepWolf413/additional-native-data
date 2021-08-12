// ambush_inb_forest.ysc @ L3629
void func_134()
{
  func_291(&(Local_274.f_73), 30f);
  if (func_131(&Local_274, 512))
  {
    if (!PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
    {
      func_28(&Local_15, 0);
      func_204(&(Local_274.f_73), Local_15[0], 1, 30f);
      PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 1);
      PLAYER::_0x45EF176B532CA851(PLAYER::PLAYER_ID(), "FRT_V2_ILO_SURRENDER");
      func_292(&Local_274, 512);
    }
  }
  else if (func_131(&Local_274, 4194304))
  {
    if (!PLAYER::_0x621D1B289CAF5978(PLAYER::PLAYER_ID()))
    {
      func_204(&(Local_274.f_73), Local_15[0], 0, 30f);
      PLAYER::_0xBED386157F65942C(PLAYER::PLAYER_ID(), 0);
      func_292(&Local_274, 4194304);
    }
    else
    {
      func_200(&Local_15, 0);
      func_204(&(Local_274.f_73), Local_15[0], 0, 30f);
      func_292(&Local_274, 4194304);
    }
  }
}