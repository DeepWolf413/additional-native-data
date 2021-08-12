// carsteal3.ysc @ L109519
void func_667(int iParam0)
{
  if (*iParam0 != -1)
  {
    GRAPHICS::DESTROY_TRACKED_POINT(*iParam0);
    *iParam0 = -1;
  }
}