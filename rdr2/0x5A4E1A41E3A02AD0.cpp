// beat_lost_dog.ysc @ L2236
void func_60(bool bParam0)
{
  if (bParam0)
  {
    if (!VOLUME::_DOES_VOLUME_EXIST(iLocal_926))
    {
      if (iLocal_15 == 1)
      {
        func_177(&iLocal_926, 1349.121f, 304.086f, 87.806f, 0f, 0f, 0f, 5f, 5f, 5f, "m_volRoads");
      }
      else
      {
        func_177(&iLocal_926, -1796.937f, -435.442f, 163.087f, 0f, 0f, 63.567f, 43.517f, 29.955f, 26.353f, "m_volRoads");
      }
      PATHFIND::_0xB03944057FD735BA(iLocal_926, 3, 0);
    }
  }
  else if (VOLUME::_DOES_VOLUME_EXIST(iLocal_926))
  {
    PATHFIND::_0x5A4E1A41E3A02AD0(iLocal_926, 3, 0);
  }
}