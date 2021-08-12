// freemode.ysc @ L936342
void func_14037(bool bParam0, bool bParam1)
{
  if ((func_14136(bParam0) || func_14135(bParam0)) || func_14134(bParam0))
  {
    if (HUD::IS_MP_GAMER_TAG_MOVIE_ACTIVE())
    {
      if (!HUD::_IS_VALID_MP_GAMER_TAG_MOVIE(bParam1))
      {
        if (func_14127(bParam0, bParam1))
        {
          func_14116(bParam0, bParam1);
          func_14115(bParam0);
          func_14114(bParam0);
          func_14113(bParam0);
          func_14039(bParam1, bParam0);
        }
      }
    }
  }
  if (Global_262145.f_14781 == 0)
  {
    func_14038(bParam1);
  }
}