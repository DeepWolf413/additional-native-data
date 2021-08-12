// agency_heist3a.ysc @ L121244
void func_840()
{
  int iVar0;
  
  if (func_534() == 1)
  {
    if (func_630(&iVar0))
    {
      PED::SET_PED_RESET_FLAG(PLAYER::PLAYER_PED_ID(), 337, true);
    }
  }
}