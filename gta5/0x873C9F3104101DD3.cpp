// am_airstrike.ysc @ L1583
int func_47()
{
  int iVar0;
  var uVar1;
  
  if (MISC::IS_PC_VERSION())
  {
    GRAPHICS::_GET_ACTIVE_SCREEN_RESOLUTION(&iVar0, &uVar1);
    if (iVar0 <= 1024)
    {
      return 1;
    }
  }
  return 0;
}