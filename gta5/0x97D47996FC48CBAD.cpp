// appinternet.ysc @ L285146
void func_2718()
{
  if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
  {
    if (HUD::GET_CURRENT_WEBSITE_ID() == 2)
    {
      if (HUD::GET_CURRENT_WEBPAGE_ID() == 8)
      {
        iLocal_1565 = 0;
        func_2719();
        iLocal_1789 = unk_0x67D02A194A2FC2BD("instructional_buttons");
        while (!GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(iLocal_1789))
        {
          GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_647, 255, 255, 255, 0, 0);
          SYSTEM::WAIT(0);
        }
        if (NETWORK::NETWORK_IS_GAME_IN_PROGRESS())
        {
          iLocal_1767 = 5;
        }
      }
    }
  }
}