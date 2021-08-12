// fillet_sp.ysc @ L23742
void func_806(var uParam0, int iParam1)
{
  if (iParam1 < 0 || iParam1 >= 5)
  {
    return;
  }
  if (GRAPHICS::IS_DECAL_ALIVE(uParam0->f_131[iParam1]))
  {
    GRAPHICS::REMOVE_DECAL(uParam0->f_131[iParam1]);
  }
}