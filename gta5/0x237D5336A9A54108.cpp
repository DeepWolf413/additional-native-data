// am_mp_submarine.ysc @ L346172
void func_5625(var uParam0, var uParam1)
{
  if (!func_4869(uParam0->f_372))
  {
    func_5520(uParam0, 2, 0);
    return;
  }
  if (!func_5252(uParam0, PLAYER::PLAYER_ID(), 2))
  {
    if (*uParam1 != -1)
    {
      if (PED::HAS_PED_HEAD_BLEND_FINISHED(uParam0->f_372) && PED::HAVE_ALL_STREAMING_REQUESTS_COMPLETED(uParam0->f_372))
      {
        if (NETWORK::NETWORK_HAS_CACHED_PLAYER_HEAD_BLEND_DATA(*uParam1))
        {
          if (NETWORK::NETWORK_APPLY_CACHED_PLAYER_HEAD_BLEND_DATA(uParam0->f_372, *uParam1))
          {
            func_5520(uParam0, 2, 1);
          }
        }
      }
    }
  }
}