// freemode.ysc @ L941098
int func_14193()
{
  if (HUD::IS_SCRIPTED_HUD_COMPONENT_ACTIVE(19) && GRAPHICS::HAS_SCALEFORM_SCRIPT_HUD_MOVIE_LOADED(19))
  {
    return 1;
  }
  if (HUD::IS_SCRIPTED_HUD_COMPONENT_HIDDEN_THIS_FRAME(19) || func_2132(1, -1))
  {
    if (HUD::IS_SCRIPTED_HUD_COMPONENT_HIDDEN_THIS_FRAME(19))
    {
    }
    if (func_2132(1, -1))
    {
    }
    return 1;
  }
  return 1;
}