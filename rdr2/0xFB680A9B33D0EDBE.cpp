// marston5_1.ysc @ L34977
int func_789(var uParam0)
{
  if (!func_915(uParam0, 5, func_180(5), -2587.49f, 457.55f, 145.27f))
  {
    return 0;
  }
  if (!func_910(2, func_175(2), 0, 0, 0, 0))
  {
    return 0;
  }
  if (!func_1268())
  {
    return 0;
  }
  if (VOLUME::_DOES_VOLUME_EXIST(iLocal_19.f_72))
  {
    VOLUME::_DELETE_VOLUME(iLocal_19.f_72);
  }
  GRAPHICS::_0xFB680A9B33D0EDBE(1);
  func_1262(&(iLocal_19.f_93), 262144);
  func_1254(uParam0, 4, 1, 0);
  func_920(uParam0, 2);
  return 1;
}