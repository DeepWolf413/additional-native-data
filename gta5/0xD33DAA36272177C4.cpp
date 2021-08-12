// am_mp_arcade.ysc @ L322605
void func_5079()
{
  bool bVar0;
  int iVar1;
  int iVar2;
  struct<3> Var3;
  
  iVar1 = 0;
  while (iVar1 < NETWORK::NETWORK_GET_MAX_NUM_PARTICIPANTS())
  {
    if (NETWORK::NETWORK_IS_PARTICIPANT_ACTIVE(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1)))
    {
      bVar0 = NETWORK::NETWORK_GET_PLAYER_INDEX(PLAYER::INT_TO_PARTICIPANTINDEX(iVar1));
      if (func_5978(bVar0, 1, 1))
      {
        iVar2 = PLAYER::GET_PLAYER_PED(bVar0);
        if (func_132(iVar2))
        {
          Var3 = { ENTITY::GET_ENTITY_COORDS(iVar2, true) };
          if (Var3.f_2 <= -52.8f)
          {
            PED::_0xD33DAA36272177C4(iVar2);
          }
        }
      }
    }
    iVar1++;
  }
}