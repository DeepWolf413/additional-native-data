// maintransition.ysc @ L98398
void func_500()
{
  char* sVar0;
  
  sVar0 = func_501();
  if (GRAPHICS::UI3DSCENE_IS_AVAILABLE())
  {
    if (GRAPHICS::UI3DSCENE_PUSH_PRESET(sVar0))
    {
      GRAPHICS::_0x7A42B2E236E71415();
    }
  }
}