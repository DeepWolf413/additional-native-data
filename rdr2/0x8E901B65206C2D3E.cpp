// beat_duel_boaster.ysc @ L2339
void func_49(bool bParam0)
{
  if (bParam0)
  {
    if (iLocal_796 == 0)
    {
      if (ENTITY::DOES_ENTITY_EXIST(iLocal_726))
      {
        AUDIO::_0xC4CFCE4C656EF480(iLocal_726);
      }
      iLocal_796 = 1;
    }
  }
  else if (iLocal_796 == 1)
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_726))
    {
      AUDIO::_0x8E901B65206C2D3E(iLocal_726);
    }
    iLocal_796 = 0;
  }
}