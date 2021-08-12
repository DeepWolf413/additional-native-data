// am_hunt_the_beast.ysc @ L114613
void func_848()
{
  int iVar0;
  
  if (MISC::IS_PC_VERSION())
  {
    NETWORK::_0x265559DA40B3F327(0);
    HUD::_OVERRIDE_MULTIPLAYER_CHAT_PREFIX(0);
    iVar0 = 0;
    while (iVar0 < 32)
    {
      NETWORK::_0x4348BFDA56023A2F(iVar0, 0);
      iVar0++;
    }
    Global_2544210.f_5191.f_45 = 0;
  }
}