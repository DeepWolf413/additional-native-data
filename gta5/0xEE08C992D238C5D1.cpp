// am_mp_arcade.ysc @ L356189
void func_5872()
{
  if (func_87(&(Local_807.f_657)))
  {
    if (func_85(&(Local_807.f_657), func_5873(Local_807.f_705), 0))
    {
      func_78(&(Local_807.f_657));
      TASK::STOP_ANIM_PLAYBACK(Local_807.f_648, 1, true);
      TASK::STOP_ANIM_PLAYBACK(Local_807.f_648, 0, true);
      func_5860(4);
    }
  }
}