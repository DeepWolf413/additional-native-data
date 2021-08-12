// act_fishing06.ysc @ L11086
bool func_245(var uParam0)
{
  int iVar0;

  if (!VOLUME::_DOES_VOLUME_EXIST(uParam0->f_42))
  {
    if (func_8(&(uParam0->f_9), 32))
    {
      uParam0->f_42 = VOLUME::_CREATE_VOLUME_SPHERE_WITH_CUSTOM_NAME(uParam0->f_37, 0f, 0f, 0f, uParam0->f_41, uParam0->f_41, uParam0->f_41, "Activity Volume");
    }
    else if (func_8(&(uParam0->f_9), 64))
    {
      iVar0 = 0;
      uParam0->f_42 = COMPANION::_0x722FBE08EF5B87BD(uParam0->f_37, 2, iVar0);
    }
    else
    {
      func_592(*uParam0, &(uParam0->f_42), uParam0->f_37, uParam0->f_41);
    }
  }
  if (VOLUME::_DOES_VOLUME_EXIST(uParam0->f_42) && VOLUME::_IS_POSITION_INSIDE_VOLUME(uParam0->f_42, Global_36))
  {
    return true;
  }
  return false;
}