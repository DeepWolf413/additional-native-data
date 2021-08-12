// beat_public_hanging.ysc @ L1927
void func_42(bool bParam0)
{
  if (bParam0)
  {
    if (!func_51(iLocal_1019, -2147483648))
    {
      if (iLocal_984 != 105)
      {
        if (func_144())
        {
          AUDIO::PLAY_STREAM_FROM_POSITION(vLocal_1060, uLocal_1437);
          func_60(&iLocal_1019, -2147483648);
        }
      }
    }
  }
  else if (func_51(iLocal_1019, -2147483648))
  {
    AUDIO::STOP_STREAM(uLocal_1437);
    func_143(&iLocal_1019, -2147483648);
  }
}