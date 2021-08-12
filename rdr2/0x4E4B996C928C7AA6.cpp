// startup.ysc @ L6404
void func_231()
{
  int iVar0;

  iVar0 = func_348();
  if (iVar0 == 1)
  {
    func_349(1);
    func_350();
    PLAYER::CLEAR_PLAYER_WANTED_LEVEL(PLAYER::PLAYER_ID());
    func_247();
    func_351(0, 0, 0, 1);
    NETWORK::_0x236905C700FDB54D();
    func_352(1, 1);
    func_249(8);
  }
  else if (iVar0 == 2)
  {
    NETWORK::_0xC505036A35AFD01B(false);
    if (CAM::IS_SCREEN_FADED_OUT() || CAM::IS_SCREEN_FADING_OUT())
    {
      CAM::DO_SCREEN_FADE_IN(0);
    }
    func_333(4);
    func_249(17);
  }
}