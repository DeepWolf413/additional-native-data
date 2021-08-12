// am_mp_arcade.ysc @ L27477
int func_321(int iParam0)
{
  if (iParam0 != 0)
  {
    if (!HUD::IS_NAMED_RENDERTARGET_LINKED(iParam0))
    {
      HUD::LINK_NAMED_RENDERTARGET(iParam0);
    }
    return 1;
  }
  return 0;
}