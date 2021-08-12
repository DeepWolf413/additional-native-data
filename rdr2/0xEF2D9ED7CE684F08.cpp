// beat_pickpocket.ysc @ L11144
void func_316(bool bParam0)
{
  if (!func_3(iLocal_449, 268435456))
  {
    if ((((func_314(iLocal_184[0]) || ENTITY::_0xEF2D9ED7CE684F08(iLocal_184[0]) == Global_35) || func_3(iLocal_449, 131072)) || !func_43(iLocal_184[0], 0, 1)) || bParam0)
    {
      if (!func_3(iLocal_449, 131072))
      {
        func_34(&iLocal_449, 131072);
      }
      AUDIO::TRIGGER_MUSIC_EVENT("REPP_MID");
      func_34(&iLocal_449, 268435456);
    }
  }
}