// rcm_serial_killer1.ysc @ L9441
void func_330(bool bParam0)
{
  if (bParam0)
  {
    if (!bLocal_507)
    {
      iLocal_508 = LAW::_0xE9EB79CBF9C0F58A(PLAYER::PLAYER_ID());
      LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
      LAW::_0xE4D6E45F491A66CB(PLAYER::PLAYER_ID(), 0);
      bLocal_507 = true;
    }
  }
  else if (bLocal_507)
  {
    LAW::_0xDE5FAA741A781F73(PLAYER::PLAYER_ID(), 1);
    LAW::_0xE4D6E45F491A66CB(PLAYER::PLAYER_ID(), iLocal_508);
    LAW::_0x390710D2DAFA6BFF(PLAYER::PLAYER_ID(), 0);
    bLocal_507 = true;
  }
}