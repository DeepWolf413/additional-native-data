// beat_public_hanging.ysc @ L5020
bool func_144()
{
  if (func_51(iLocal_1019, 268435456))
  {
    return true;
  }
  if (!func_51(iLocal_1019, 268435456))
  {
    if (AUDIO::LOAD_STREAM("CROWD_WALLA", "REPH_Sounds"))
    {
      uLocal_1437 = AUDIO::_0x0556C784FA056628("CROWD_WALLA", "REPH_Sounds");
      func_60(&iLocal_1019, 268435456);
      return true;
    }
    else
    {
      return false;
    }
  }
  return false;
}