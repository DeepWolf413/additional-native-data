// fm_deathmatch_controler.ysc @ L536982
void func_9441(var uParam0, bool bParam1)
{
  int iVar0;
  
  iVar0 = 0;
  while (iVar0 <= (Global_4456448.f_138135.f_1 - 1))
  {
    if (HUD::DOES_BLIP_EXIST(uParam0->f_2[iVar0 /*17*/].f_1))
    {
      HUD::REMOVE_BLIP(&(uParam0->f_2[iVar0 /*17*/].f_1));
    }
    if (HUD::DOES_BLIP_EXIST(uParam0->f_2[iVar0 /*17*/].f_2))
    {
      HUD::REMOVE_BLIP(&(uParam0->f_2[iVar0 /*17*/].f_2));
    }
    iVar0++;
  }
  if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_88))
  {
    uParam0->f_89 = 1;
    GRAPHICS::SET_SCALEFORM_MOVIE_AS_NO_LONGER_NEEDED(&(uParam0->f_88));
  }
  if (HUD::DOES_BLIP_EXIST(uParam0->f_651))
  {
    HUD::REMOVE_BLIP(&(uParam0->f_651));
  }
  if (bParam1)
  {
    GRAPHICS::FORCE_RENDER_IN_GAME_UI(false);
  }
  PED::SET_PED_CONFIG_FLAG(PLAYER::PLAYER_PED_ID(), 416, false);
  func_8832(uParam0);
}