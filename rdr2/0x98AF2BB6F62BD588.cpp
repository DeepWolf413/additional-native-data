// marston7.ysc @ L50110
bool func_1197(char* sParam0)
{
  if (!HUD::IS_NAMED_RENDERTARGET_REGISTERED(sParam0))
  {
    HUD::REGISTER_NAMED_RENDERTARGET(sParam0, false);
    HUD::LINK_NAMED_RENDERTARGET(iLocal_28);
    if (HUD::IS_NAMED_RENDERTARGET_LINKED(iLocal_28))
    {
    }
    else
    {
      if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sParam0))
      {
        HUD::RELEASE_NAMED_RENDERTARGET(sParam0);
      }
      return false;
    }
  }
  return true;
}