// agency_heist3b.ysc @ L114444
void func_767(bool bParam0, bool bParam1)
{
  if (func_769(0))
  {
    if (!MISC::IS_BIT_SET(Local_6207, 29))
    {
      func_768(&Local_6207, 0);
    }
    if (bParam0)
    {
      if (bParam1)
      {
        func_118(1);
      }
      else if (HUD::GET_PAUSE_MENU_STATE() == 0 && !HUD::IS_PAUSE_MENU_ACTIVE())
      {
        GRAPHICS::DRAW_SCALEFORM_MOVIE_FULLSCREEN(iLocal_71, 255, 255, 255, 255, 0);
      }
    }
    else if (bParam1)
    {
      func_118(0);
    }
    else if (ENTITY::DOES_ENTITY_EXIST(Local_3865[2 /*2*/]))
    {
      HUD::SET_TEXT_RENDER_ID(iLocal_6509);
      GRAPHICS::DRAW_SCALEFORM_MOVIE(iLocal_71, 0.426f, 0.366f, 0.925f, 0.723f, 255, 255, 255, 255, 0);
      HUD::SET_TEXT_RENDER_ID(iLocal_6508);
    }
  }
}