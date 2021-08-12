// marston7.ysc @ L25642
void func_429(char* sParam0)
{
  if (HUD::IS_NAMED_RENDERTARGET_REGISTERED(sParam0))
  {
    HUD::RELEASE_NAMED_RENDERTARGET(sParam0);
  }
}