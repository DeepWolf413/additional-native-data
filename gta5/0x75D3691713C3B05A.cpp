// maintransition.ysc @ L99691
void func_566()
{
  if (func_394(0))
  {
    if (func_29(202))
    {
      func_4332(3);
      func_567(6, 0);
      func_4340(4);
    }
    if (!HUD::IS_SOCIAL_CLUB_ACTIVE())
    {
      if (func_29(201))
      {
        HUD::OPEN_SOCIAL_CLUB_MENU();
      }
    }
    if (NETWORK::NETWORK_HAS_SOCIAL_CLUB_ACCOUNT())
    {
      func_4332(3);
      func_4340(4);
    }
  }
}