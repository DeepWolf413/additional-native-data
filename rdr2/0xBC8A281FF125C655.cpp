// industry1.ysc @ L84457
bool func_2119(int iParam0, int iParam1, bool bParam2)
{
  if (bParam2)
  {
    if (!INTERIOR::IS_INTERIOR_READY(iParam0))
    {
      return false;
    }
  }
  if (iParam1 || Global_1934765.f_271)
  {
    return true;
  }
  return ((INTERIOR::_GET_INTERIOR_FROM_GAME_VIEWPORT() != iParam0 && INTERIOR::GET_INTERIOR_FROM_ENTITY(Global_35) != iParam0) || CAM::IS_SCREEN_FADED_OUT());
}