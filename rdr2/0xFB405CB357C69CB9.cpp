// beat_animal_attack.ysc @ L10503
bool func_297(var uParam0)
{
  int iVar0;

  if (uParam0->f_7 == 0)
  {
    uParam0->f_7 = GRAPHICS::CREATE_TRACKED_POINT();
    if (uParam0->f_7 == 0)
    {
    }
    GRAPHICS::SET_TRACKED_POINT_INFO(uParam0->f_7, *uParam0, 4f);
  }
  else
  {
    iVar0 = GRAPHICS::_0xDFE332A5DA6FE7C9(uParam0->f_7);
    if (iVar0 == -1)
    {
      return false;
    }
    if (iVar0 == 0)
    {
      return true;
    }
  }
  return false;
}