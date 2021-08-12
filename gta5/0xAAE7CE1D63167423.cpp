// fm_bj_race_controler.ysc @ L325098
int func_4564(var uParam0)
{
  int iVar0;
  int iVar1;
  var uVar2;
  
  if (!PAD::_IS_USING_KEYBOARD(2) || !MISC::IS_BIT_SET(uParam0->f_129, true))
  {
    return 0;
  }
  HUD::_SET_MOUSE_CURSOR_ACTIVE_THIS_FRAME();
  if (GRAPHICS::HAS_SCALEFORM_MOVIE_LOADED(uParam0->f_106) && HUD::_0x632B2940C67F4EA9(uParam0->f_106, &iVar0, &iVar1, &uVar2))
  {
    if ((iVar0 == 5 && iVar1 > -1) && iVar1 < 9)
    {
      uParam0->f_857 = iVar1;
      func_4562(uParam0, uParam0->f_857, 1);
      return 1;
    }
  }
  return 0;
}